#include "pin_config.h"
#include <IRLibDecodeBase.h>
#include <IRLib_P01_NEC.h>
#include <IRLibCombo.h>
//#include <IRLibRecvPCI.h>//geeft value
#include <IRLibRecv.h>
IRrecv MyReceiver(3); //Create the receiver

IRdecode MyDecoder;

void decodeIr();//declare function

void InfraRedInit() {
  MyReceiver.enableIRIn();//start receiving
}
void InfraRedMessage() {
  if (MyReceiver.getResults()) {//wait till it returns true
    if (MyDecoder.decode()) {
      switch (MyDecoder.value) {
        case 551496405:
          Serial.println("up");
          break;
        case 551533125:
          Serial.println("down");
          break;
        case 551524965:
          Serial.println("left");
          break;
        case 551500485:
          Serial.println("right");
          break;
        case 551497935:
          Serial.println("power");
          break;
        case 551530575:
          Serial.println("open");
          break;
        default:
          Serial.println("unknown");
          break;
      }
    }

    MyReceiver.enableIRIn(); //restart the receiver
  }
}
void decodeIr(uint32_t irSignal) {
  //Yakumo dvd remote codes decimaal
  switch (irSignal) {
    case 551496405:
      Serial.println("up");
      break;
    case 551533125:
      Serial.println("down");
      break;
    case 551524965:
      Serial.println("left");
      break;
    case 551500485:
      Serial.println("right");
      break;
    case 551497935:
      Serial.println("power");
      break;
    case 551530575:
      Serial.println("open");
      break;
    default:
      Serial.println("unknown");
      break;
  }
}

/* Yakumo codes
  up   551496405
  down 551533125
  left 551524965
  right 551500485

  power 551497935
  open  551530575

  enter 4294967295
*/

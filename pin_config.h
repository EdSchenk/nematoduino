#ifndef pin_config_h
#define pin_config_h

// Motor pins L298N motor driver board
const uint8_t rightMotorPinA = 10; //Right motor => IN1 pin 8
const uint8_t rightMotorPinB = 9; //Right motor => IN2 pin 9
const uint8_t leftMotorPinA = 12; // Left Motor => IN3 pin 10
const uint8_t leftMotorPinB = 11; //Left Motor IN4 pin 11

// Button pin (configured so that on is LOW)
const uint8_t buttonPin = 5; //was 12

// Transmit and receive pins for distance sensor
const uint8_t tPin = A0;//was 2
const uint8_t rPin = A1;//was 4

// Pin for status LED (turns on when nose touch neurons stimulated)
const uint8_t statusPin = 13;

// Pins for speaker
const uint8_t speaker = 7;
const uint8_t speakerMin = 6;

#endif

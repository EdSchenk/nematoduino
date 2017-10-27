#ifndef pin_config_h
#define pin_config_h

// Motor pins
const uint8_t rightMotorPinA = 9; //Right motor
const uint8_t rightMotorPinB = 8; //Right motor
const uint8_t leftMotorPinA = 11; // Left Motor
const uint8_t leftMotorPinB = 10; //Left Motor

// Button pin (configured so that on is LOW)
const uint8_t buttonPin = 12;

// Transmit and receive pins for distance sensor
const uint8_t tPin = A0;//was 2
const uint8_t rPin = A1;//was 4

// Pin for status LED (turns on when nose touch neurons stimulated)
const uint8_t statusPin = 13;

// Pins for speaker
const uint8_t speaker = 7;
const uint8_t speakerMin = 6;

#endif

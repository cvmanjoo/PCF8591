/*
 * PCF8591.cpp - 
 * Created by Manjunath CV. April 04 2019, 07:00 PM
 * Released into the public domain.
 */

#include <Arduino.h>
#include <Wire.h>
#include <PCF8591.h>

PCF8591::PCF8591()
{
	_address = 0x48;
	Wire.begin();
}

PCF8591::PCF8591(uint8_t address)
{
	_address = address;
	Wire.begin();
}

uint8_t PCF8591::analogRead(uint8_t pin)
{
	uint8_t value;
	Wire.beginTransmission(_address);
	Wire.write(pin);
	Wire.endTransmission();
	Wire.requestFrom(_address,1);
	value = Wire.read();
	return(value);
}

void PCF8591::analogWrite(uint8_t pin, uint8_t value)
{
	Wire.beginTransmission(_address); // wake up PCF8591
	Wire.write(0x40); // control byte - turn on DAC (binary 01000000)
	Wire.write(value); // value to send to DAC
	Wire.endTransmission(); // end tranmission

}


/* ------------------------------------------------------------
 * "THE BEERWARE LICENSE" (Revision 42):
 * <cvmanjoo@gmail.com> wrote this code. As long as you retain this
 * notice, you can do whatever you want with this stuff. If we
 * meet someday, and you think this stuff is worth it, you can
 * buy me a beer in return.
 * ------------------------------------------------------------
 * ------------------------------------------------------------
 * PCF8591.h - PCF8591
 * Created by Manjunath CV. June 24 2020
 * Released into the public domain.
 * -----------------------------------------------------------*/

#ifndef PCF8591_H
#define PCF8591_H

#include <Arduino.h>
#include <Wire.h>

#define PCF8591_DFLT_ADDR 0x48

#define AIN0 0
#define AIN1 1
#define AIN2 2
#define AIN3 3

#define AOUT 0



class PCF8591
{
    public:
        PCF8591(void);
        PCF8591(uint8_t address);      
        uint8_t analogRead(uint8_t pin);
		void analogWrite(uint8_t pin, uint8_t value);

    private:
        uint8_t _address;
};

/* Instantiate class
static PCF8591 PCF8591;
*/

#endif   /* PCF8591_H */

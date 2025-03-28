#include "grains.h"
#include <math.h>
#include <stdint.h>

/* 
 * Square 1 -> 1
 * Square 2 -> 2
 * Square 3 -> 4
 * Square 4 -> 8
 * Square 5 -> 16
 * Square 6 -> 32
 * Square 7 -> 64
 * .
 * .
 * .
 * .
 * .
 * .
*/

/* 
 * With the help of math.h functions so, cheating for me... , nevermindž
*/

uint64_t square(uint8_t index) {

    return pow(2,index - 1); // this returns the number of grains on a square that we want.. so 5th square will have 16, because pow(2,4);

}

uint64_t total(void) {

    uint64_t sum = 0; // because int can store 32 bits or 4 bytes and this stores 64 bits values so double that which helps us be precise
    uint8_t index;

    for (index = 1; index < 66; index++) {
        sum += square(index);
    }

    return sum;
}




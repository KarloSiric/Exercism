#include "eliuds_eggs.h"
#include <stdint.h>

uint64_t egg_count(uint64_t number) {
    int count = 0;
    // we can use masking so we make a mask bit which is 001 and we bit shift it to the left every time we do the checking so...

    while (number) {
        number &= (number - 1);
        count++;
    }
    

    

    return count;
}

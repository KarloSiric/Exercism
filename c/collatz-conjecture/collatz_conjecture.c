#include "collatz_conjecture.h"
#include <stdint.h>

/* for recursion to keep track of count we need another parameter so... */


/* takes too long for tester to run this */

int steps(int start) {

 
    int64_t count = 0;
    int64_t n = (int64_t) start;

    if (n <= 0) {
        return ERROR_VALUE; // error negative number
    }

    if (n == 1) {
        return 0;
    }

    while(n != 1) { 

        if (n % 2 == 0) {
            n = n >> 1;
            count++;
        } else {
            n = 3 * n + 1;
            count++;
        }
    }

    return count;
}



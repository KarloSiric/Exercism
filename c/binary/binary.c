#include "binary.h"
#include <string.h>
#include <math.h>


int convert(const char *input) { // since it is given as a string we need to convert that from ascii value to real value

    int result = 0;

    for (char *c = (char *) input; *c != '\0'; c++) {
        if (*c != '1' && *c != '0') {
            return -1;
        }
        result = result << 1; // bit shift it by 1;

        if (*c == '1') {
            result += 1;
        }
    }
    
    return result;

}

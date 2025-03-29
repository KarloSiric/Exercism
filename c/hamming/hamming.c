#include "hamming.h"
#include <string.h>


int compute(const char *lhs, const char *rhs) {
    
    int i = 0;
    int count = 0;

    if (strlen(lhs) != strlen(rhs)) { // if they are different lengths return an error code meaning it is -1
        return -1;
    }

    for (i = 0; i < (int)strlen(lhs); i++) {
        if (lhs[i] != rhs[i]) {
            count++;
        }
    }
    
    return count;
}

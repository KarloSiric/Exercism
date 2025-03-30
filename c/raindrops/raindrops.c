#include "raindrops.h"
#include <stdio.h>
#include <string.h>

void convert(char result[], int drops) {

    // so we are given an array called result and array of chars, and we store it all inside this one big array, so we see if it is divisible and we attach it all to that
    if (drops % 3 == 0) {
        strcat(result, "Pling");   
    }
    if (drops % 5 == 0) {
        strcat(result, "Plang");
    }
    if (drops % 7 == 0) {
        strcat(result, "Plong");
    }
    if (result[0] == '\0') {
        sprintf(result, "%d", drops);
    }

}

#include "two_fer.h"
#include <stdio.h>

void two_fer(char *buffer, const char *name) {
    
    if (name == NULL) {
        sprintf(buffer, "One for you, one for me.");
    } else {
        sprintf(buffer, "one for %s, one for me.", name);
    } 

}

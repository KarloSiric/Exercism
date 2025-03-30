#include "pangram.h"
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

/* something is a pangram if it using all 26 letters of the alphabet */

bool is_pangram(const char *sentence) {

    if (sentence == NULL) {
        return false;
    }


    size_t len = strlen(sentence);

    bool arr[26] = {false}; // here we keep track of which ones we visited

    for (size_t i = 0; i < len; i++) {
        char c = sentence[i];

        // we check if it is alphabetic and then if it, we convert it to lowercase and store it insdie the array
        if (isalpha(c)) {
            size_t index = tolower(c) - 'a';
            arr[index] = true;
        }
    }

    for (size_t i = 0; i < 26; i++) {
        if (!arr[i]) {
            return false;
        }
    }

    return true;
}

#include "isogram.h"
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

bool is_isogram(const char *phrase) {
    if (phrase == NULL) {
        return false;
    }
    
    if (*phrase == '\0') {
        return true;  // Empty string is considered an isogram
    }
    
    int array[26] = {0};  // Initialize all counts to 0
    
    for (int i = 0; phrase[i] != '\0'; i++) {
        // Skip non-alphabetic characters
        if (!isalpha((unsigned char)phrase[i])) {
            continue;
        }
        
        // Get the lowercase index (0-25) for this letter
        int index = tolower((unsigned char)phrase[i]) - 'a';
        
        // If we've already seen this letter, it's not an isogram
        if (array[index] > 0) {
            return false;
        }
        
        // Mark this letter as seen
        array[index]++;
    }
    
    // If we made it through the whole string without finding duplicates
    return true;
}

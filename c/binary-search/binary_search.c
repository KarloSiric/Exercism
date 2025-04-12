#include "binary_search.h"
#include <stddef.h>

const int *binary_search(int value, const int *arr, size_t lenght) {
    // we start first by declaring pointers for the given array
    // but since we have a const int *arr that means we cant sort it because it is a const
    size_t left = 0;
    size_t right = lenght - 1; // beacause arrays are 0 indexed so we need to be careful

    if (lenght == 0) {
        return NULL;
    }

    while(left <= right) {
        size_t middle = (left + right) / 2; // this will give us the middle one

        if (arr[middle] == value) {
            return &arr[middle];
        }

        if (arr[middle] > value) {
            if (middle == 0) {
                return NULL;
            }
            right = middle - 1;
        } else {
            if (middle == lenght - 1) {
                return NULL; // we are returning null pointer address
            }
            left = middle + 1;
        }
    }

    return NULL; // we need to return a pointer so here we return NULL or otherwise it is an error
}

// now lets solve it using pointers now!

const int *binary_search2(int value, const int *arr, size_t lenght) {

    const int *left = arr; // arr points to the first element so that's why we use this
    const int *right = arr + lenght - 1; 

    while(true) {
        const int *middle = left + (right - left) / 2; // we cant directly add two pointers together because we are adding two memory addresses and that doesnt make sense
        // when we do do address + 5 it means to advance the address by 5 whatever we have so, if we have int pointer and we add to that pointer + 1, this will advance the memory address that taht pointer is pointing to by 4 bytes...
        // this is just how C works under the hood! 

        if (*middle == value) {
            return middle; // here we return the memory address of where that is located that memory address where the value is in the RAM
        }

        if (*middle > value) {
            right = middle - 1;
        } else {
            left = middle + 1; 
        }
    }

    return NULL; // if we didnt find anything
}

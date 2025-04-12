#include "armstrong_numbers.h"
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

bool is_armstrong_number(int candidate) {

    if (candidate == 0) {
        return true; // special case when the number is 0;
    }

    int temp = candidate;
    int digits_count;
    while (temp > 0) {
        temp /= 10;
        digits_count++;
    }

    temp = candidate;
    int sum = 0;
    while (temp > 0) {
        int digit = temp % 10; // because modulus with 10 basically take 9 % 10 is 9, modulus 10 % 10 is 
        sum += pow(digit, digits_count);
        temp /= 10;
    }

    if (sum == candidate) {
        return true;
    }
    return false;
}

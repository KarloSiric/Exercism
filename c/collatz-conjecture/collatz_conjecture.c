#include "collatz_conjecture.h"
#include <stdio.h>

int steps(int start) {

    while(start != 1) {
        if ((start % 2 == 0) && (start / 2 != 1)) {
            
        }


        if (start % 2 == 0) {
            start = start / 2;
        } else {
            start = ((start * 3) + 1);
        }
        printf("%d ", start);
    }
}

int main(void) {

    int number;
    printf("Enter any number: ");
    scanf("%d", &number);

    steps(number);

    return 0;
}

#include "leap.h"
#include <stdio.h>

// bool leap_year(int year) {
//     if (year % 100 == 0) {
//         if (year % 400 == 0) {
//             return true;
//         } else {
//             return false;
//         }
//    }
//     else if (year % 4 == 0) {
//         return true;
//     }
//     else {
//         return false;
//     }
// }

/* second approach, making it more concise and one liner 
 * 
 * If a year is divisible by 4 but not by 100 it is a leap year, but if it is divisible by 100 and also by 400 it is also a leap year...
 * So if it divisible by 400 it is a leap year, and if it is divisible by 4 and not by 100 it is also a leap year!
 * 
 */




bool leap_year(int year) {

    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
    
}

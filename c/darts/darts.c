#include "darts.h"
#include <math.h>
#include <stdint.h>

/* so given x and y we can find the radius, the formula for finding the radius is x^2 + y^2 and then sqrt that so lets find it */
uint8_t score(coordinate_t pos) {

    float radius = sqrt((pos.x * pos.x) + (pos.y * pos.y));

    if (radius <= 1.0f) {
        return 10; 
    }
    if (radius <= 5.0f) {
        return 5;
    }
    if (radius <=10.0f) {
        return 1;
    } 

    return 0;
}

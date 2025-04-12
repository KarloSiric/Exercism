#include "resistor_color_trio.h"
#include <math.h>


resistor_value_t color_code(resistor_band_t *colors) { // this is an array of enums, they will be given to us in some order
    resistor_value_t resistor;
    resistor.value = colors[0] * 10 + colors[1];
    int zeros = colors[2];

    if (zeros < 3) {
        resistor.value *= pow(10, zeros);
        if (resistor.value < 1000) {
            resistor.unit = OHMS;
        } else {
            resistor.value /= 1000;
            resistor.unit = KILOOHMS;
        }
    }


    // say we get 4 zeros so, we would have 330000 -> 330

    else if (zeros >= 3 && zeros < 6) {
        resistor.value *= pow(10, zeros - 3);
        resistor.unit = KILOOHMS;   
    }
    else if (zeros >= 6 && zeros < 9) {
        resistor.value *= pow(10, zeros - 6);
        resistor.unit = MEGAOHMS;
    }
    else {
        resistor.value *= pow(10, zeros -9);
        resistor.unit = GIGAOHMS;
    }

    return resistor;
}

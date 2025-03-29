#include "resistor_color.h"
#include <stdbool.h>


/* to look up any color code for a resistor */
bool init = false;
resistor_band_t all_colors[10];
int i = 0;

int color_code(resistor_band_t band) { // here we give for a parameter the whole resistor enum and then we just take the int from that ...
    return (int) band;
}

resistor_band_t* colors(void)
{
    if (!init) {
        for (i = 0; i <= WHITE; i++) {
            all_colors[i] = (resistor_band_t)i;
        }
        init = true;
    }

    return all_colors;
}






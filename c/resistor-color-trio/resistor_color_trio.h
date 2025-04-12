#ifndef RESISTOR_COLOR_TRIO_H
#define RESISTOR_COLOR_TRIO_H

// enums assign automatically values if you dont assign them, so brown is 1 red is 2 automatically by the compiler
#include <stdint.h>
typedef enum {
    BLACK = 0,
    BROWN,
    RED,
    ORANGE,
    YELLOW,
    GREEN,
    BLUE,
    VIOLET,
    GREY,
    WHITE
} resistor_band_t;

typedef enum {
    OHMS = 0,
    KILOOHMS = 3,
    MEGAOHMS = 6,
    GIGAOHMS = 9,
} ohms_units;

typedef struct resistor {
    uint64_t value;
    ohms_units unit; // data type unit is represented by a enum ohms_units so it can be ohms, kiloohms etc etc
} resistor_value_t;

resistor_value_t color_code(resistor_band_t *);




#endif

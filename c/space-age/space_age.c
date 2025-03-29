#include "space_age.h"

/* One Earth year equals 365.25 Earth days, or 31,557,600 seconds */

/* So we need to find the seconds on some other planet that will be given to us */

const float EARTH_YEAR_IN_SECONDS = 31557600;

const float orbital_periods[] = { // here we make an array of all those orbits!
    0.2408467,
    0.61519726,
    1.0,
    1.8808158,
    11.862615,
    29.447498,
    84.016846,                   
    164.79132
};

float age(planet_t p, int64_t s) {

    if (p < 0 || p > 7) {
        return -1;
    }


    float years = s / orbital_periods[p] / EARTH_YEAR_IN_SECONDS; 
    return years;
}

#include "dnd_character.h"
#include <stdlib.h>
#include <time.h>
#include <math.h>

// this is our rolling part of the program... So here we roll 4 times a dice of 6 sides, we keep track of the minimal number of those, best way is to sum everything total sum of all and remove the smallest role and thats it.
// function declarations:
int randNumber(void);
int ability(void);
int modifier(int);

int randNumber(void) { // this returns numbers from 0 to 5 if we dont have this + 1
    return rand() % 6 + 1; // so it produces numbers from 0 to RAND_MAX and lets say we get
}

int ability(void) {

    int rolls[4]; // we have 4 rolls and inside these 4 we store numbers
    int sum = 0;
    int min_roll = 6; // since on the dice we can get the 6 as the largest number than thats what we start with

    for (int i = 0; i < 4; i++) {
        rolls[i] = randNumber(); // we assign the numbers here
        sum += rolls[i];

        if (rolls[i] < min_roll) {
            min_roll = rolls[i];
        }
    }
    
    return sum - min_roll; // here we return that sum that we ahve total sum minus the rolls that is random or something so we have this...
}

int modifier(int score) { // this is the modifier that we are using... specified in the task the assignemnt...
    if (score < 10) {
        return (score - 10 - 1) / 2;
    } else {
        return (score - 10) / 2;
    }
}

dnd_character_t make_dnd_character(void) {
    // srand((unsigned int)time(NULL));
    dnd_character_t character; // lets initialize the character

    character.strength = ability();
    character.dexterity = ability();
    character.constitution = ability();
    character.intelligence = ability();
    character.wisdom = ability();
    character.charisma = ability();

    character.hitpoints = 10 + modifier(character.constitution);

    return character;
}


#ifndef DND_CHARACTER_H
#define DND_CHARACTER_H

typedef struct {
   int strength;
   int dexterity;
   int constitution;
   int intelligence;
   int wisdom;
   int charisma;
   int hitpoints;
} dnd_character_t;

int ability(void);
int modifier(int score);
dnd_character_t make_dnd_character(void); // this return a character, or lets say a structure that has all these things that means in some sense a character it returns a character for us...

#endif

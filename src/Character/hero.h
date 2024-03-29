#ifndef HERO_H
#define HERO_H

typedef struct hero {
    char *name;
    char *class;
    int iq;
    int strength;
    int agility;
    int health;
} Hero;

Hero createHero(char *name, char *class, int iq, int strength, int agility, int health);
void getHeroStat(Hero hero);
#endif
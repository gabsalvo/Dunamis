#include <stdio.h>
#include <string.h>
#include "hero.h"

Hero createHero(char *name, char *class, int iq, int strength, int agility, int health) {
    Hero newHero;

    // Assicurati di allocare memoria per le stringhe
    newHero.name = strdup(name);
    newHero.class = strdup(class);
    newHero.iq = iq;
    newHero.strength = strength;
    newHero.agility = agility;
    newHero.health = health;

    return newHero;
}

void getHeroStat(Hero hero) {
    printf("Nome: %s\n", hero.name);
    printf("Classe: %s\n", hero.class);
    printf("IQ: %d\n", hero.iq);
    printf("Forza: %d\n", hero.strength);
    printf("Agilità: %d\n", hero.agility);
    printf("Salute: %d\n", hero.health);
}

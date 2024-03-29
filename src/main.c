#include <stdio.h>
#include "Character/hero.h"


int main(int argc, char *argv[]){
    printf("Start Game\n");
    Hero hero = createHero("Zuko", "Sun Warrior", 100, 75, 85, 1000);
    getHeroStat(hero);
    return 0;
}
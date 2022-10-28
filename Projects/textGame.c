#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
typedef struct
{
    char* name; char* lastname; char* description;
    int16_t health, stamina, mana, attack, defense;  
} hero_t;

void drukuj(hero_t hero)
{
    printf("Name: %s   Last name: %s   Description: %s\nHealth: %d\nStamina: %d\nMana: %d\nAttack: %d\nDefense: %d", hero.name, hero.lastname, hero.description, hero.health, hero.stamina, hero.mana, hero.attack, hero.defense);
}

void menu()
{

}

void start()
{
    hero_t bob = {.name = "Bob", .description = "human", 
        .health = 100, .stamina = 100, .mana = 100, .attack = 2, .defense = 3};
    drukuj(bob);
}

int main()
{
    //menu();
    start();    

    return 0;
}
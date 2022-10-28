#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
typedef struct
{
    char* name; char* lastname; char* description;
    int16_t health, stamina, mana, attack, defense;  
} hero_t;

char* toString(hero_t hero)
{
    static char string[87];
    sprintf(string, "Name: %s   Last name: %s   Description: %s\nHealth: %d\nStamina: %d\nMana: %d\nAttack: %d\nDefense: %d", hero.name, hero.lastname, hero.description, hero.health, hero.stamina, hero.mana, hero.attack, hero.defense);
    return string;
}

void menu()
{

}
size_t test (char *str) {
    size_t len = 0;
    while (*str != '\0') {
        len++;
        //printf("%x\n", *str);
        int word1 = *str;
        char word2 = word1 + '0';
        printf("%c", *str);
        str++;
    }
    return len;
}

void start()
{
    hero_t bob = {.name = "Bob", .description = "human", 
        .health = 100, .stamina = 100, .mana = 100, .attack = 2, .defense = 3};
    char* bobString = toString(bob);

    int dlogoscTab = sizeof(bobString)/sizeof(bobString[0]); 
    for(int i = 0; i< 123; i++)
    {
        printf("%c\n", bobString[i]);
    }
}

int main()
{
    //menu();
    start();    

    return 0;
}

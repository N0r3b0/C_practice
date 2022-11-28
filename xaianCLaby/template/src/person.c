#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct // tworzenie struktury osoba (imie, pokolenie)
{
    char *name;
    char *lastname;
    int32_t id;
    bool status;
}Person;

char* personToString(Person* p)
{
    int counter = 0;
    char* output = malloc(128);
    while(*p->name)
    {
        *output = *p->name;
        output++;
        counter++;
        p->name++;
    }//memcpy
    *output = ' ';
    output++;
    counter++;
    while(*p->lastname)
    {
        *output = *p->lastname;
        output++;
        counter++;
        p->lastname++;
    }
    *output = '\0';
    output -= counter;

    return output;
}

int main()
{
    Person per = {}
    char* string = personToString(&per);
    printf(string);
    printf("\n");
}
// Create Person type  // imie  // nazwisko  // numer indexl  // student status (bool)  // sex (enum) include gender :P// Create function to display person// Create function to go to study (change status & set index)// Create function to expelled from study (change status)// Create Person global object (me) int main(void)
// Create Person loacal object (my-best-friend)  // tests...  // display (me)  // display (my-best-friend)  return 0;
/*
char *int2str(uint32_t i) {
  char const digit[] = "0123456789";
  char *p = malloc(11);
  if(i<0){
    *p++ = '-';
    i *= -1;
  }
  int shifter = i;
  do {
    ++p;
    shifter = shifter/10;
  } while(shifter);
  *p = '\0';
  do {
    *--p = digit[i % 10];
    i = i/10;
  } while(i);
  return p;
}*/
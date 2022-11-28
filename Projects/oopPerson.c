#include <stdio.h>
#include <stdlib.h>

#define nameLength 32    //length of strings made for names

typedef struct Person
{
    char name[nameLength];
    char lastname[nameLength];
    int age;
    void (*setName)(struct Person *, char[nameLength]);
    void (*setLastName)(struct Person *, char[nameLength]);
    void (*setAge)(struct Person *, int);
    char* (*toString)(struct Person *);
    
} Person;

void setName_f(Person *person, char newName[nameLength])
{
    for (int i = 0; i < nameLength; i++)
        person->name[i] = newName[i];
}
void setLastName_f(Person *person, char newLastName[nameLength])
{
    for (int i = 0; i < nameLength; i++)
        person->lastname[i] = newLastName[i];
}
void setAge_f(Person *person, int newAge)
{
    person->age = newAge;
}

char *personToStr_f(Person *person)
{
    char *output = malloc(nameLength * 2 * sizeof(char) + sizeof(int) + 16); // 16 --> buffer for whitespaces and extra characters
    int i = 0;
    int counter = 0;

    while (person->name[i] != '\0')
    {
        output[counter] = person->name[i];
        counter++;
        i++;
    }

    output[counter] = ' ';    //adding whitespace
    counter++;

    i = 0;  //i must be 0 before next loop
    while (person->lastname[i] != '\0')
    {
        output[counter] = person->lastname[i];
        counter++;
        i++;
    }

    output[counter] = ' ';
    counter++;

    char *tempAge = malloc(3*sizeof(char));    //temp for itoa, 3 digits for age
    itoa(person->age, tempAge, 10);  //int to string
    i = 0;   // i must be 0 before next loop
    while (i<2)
    {
        output[counter] = tempAge[i];
        counter++;
        i++;
    }

    output[counter] = '\0';
    return output;
}

int main(void)
{
    Person person1;
    //connecting functions to Person struct
    person1.setName = setName_f;
    person1.setLastName = setLastName_f;
    person1.setAge = setAge_f;
    person1.toString = personToStr_f;
    //setting variables
    person1.setName(&person1, "Adam");
    person1.setLastName(&person1, "Kowalski");
    person1.setAge(&person1, 14);

    printf("%s", person1.toString(&person1));
    
    printf("\n");

    //new variables
    person1.setName(&person1, "Alexey");
    person1.setLastName(&person1, "Isalov");
    person1.setAge(&person1, 14);

    printf("%s", person1.toString(&person1));

    return 0;
}
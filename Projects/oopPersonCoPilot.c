#include <stdio.h>
#include <stdlib.h>

#define nameLength 32 // length of strings made for names

typedef struct Person
{
    char name[nameLength];
    char lastname[nameLength];
    int age;
    void (*setName)(struct Person *, char[nameLength]);
    void (*setLastName)(struct Person *, char[nameLength]);
    void (*setAge)(struct Person *, int);
    char *(*toString)(struct Person *);

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

    output[counter] = ' '; // adding whitespace
    counter++;

    i = 0; // i must be 0 before next loop
    while (person->lastname[i] != '\0')
    {
        output[counter] = person->lastname[i];
        counter++;
        i++;
    }

    output[counter] = ' ';
    counter++;

    char *tempAge = malloc(3 * sizeof(char)); // temp for itoa, 3 digits for age
    itoa(person->age, tempAge, 10);           // int to string
    i = 0;                                    // i must be 0 before next loop
    while (i < 2)
    {
        output[counter] = tempAge[i];
        counter++;
        i++;
    }

    output[counter] = '\0';
    return output;
}

//new person with default values
Person *newPerson()
{
    Person *person = malloc(sizeof(Person));
    //connecting functions to struct
    person->setName = setName_f;
    person->setLastName = setLastName_f;
    person->setAge = setAge_f;
    person->toString = personToStr_f;
    return person;
}

//new person with custom values
Person *newPersonCustom(char name[nameLength], char lastname[nameLength], int age)
{
    Person *person = malloc(sizeof(Person));
    person->setName = setName_f;
    person->setLastName = setLastName_f;
    person->setAge = setAge_f;
    person->toString = personToStr_f;
    person->setName(person, name);
    person->setLastName(person, lastname);
    person->setAge(person, age);
    return person;
}

//person destructor
void deletePerson(Person *person)
{
    free(person);
}


int main(void)
{
    Person *person1 = newPerson();
    person1->setName(person1, "John");
    person1->setLastName(person1, "Doe");  
    person1->setAge(person1, 30);
    printf("%s", person1->toString(person1));

    Person *person2 = newPersonCustom("Jane", "Doe", 25);
    printf("%s", person2->toString(person2));

    return 0;
}
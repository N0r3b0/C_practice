#include <stdio.h>

typedef struct Person
{
    char name[128];
    char lastname[128];
    int age;
    void (*setName)(struct Person *, char[128]);
    char (*getName)(struct Person *);
    void (*setAge)(struct Person *, int);
    int (*getAge)(struct Person *);
    
} Person;

void setName_f(Person *person, char newName[128])
{
    for (int i = 0; i < 128; i++)
        person->name[i] = newName[i];
}
char getName_f(Person *person)
{
    return *person->name;
}
void setAge_f(Person *person, int newAge)
{
    person->age = newAge;
}
int getAge_f(Person *person)
{
    return person->age;
}
int main(void)
{
    Person adam;
    adam.setAge = setAge_f;
    adam.setName = setName_f;
    adam.getAge = getAge_f;
    adam.getName = getName_f;

    adam.setName(&adam, "Przykladowe imie");
    printf("Adam's name is %s\n", adam.name);

    adam.setName(&adam, "Adam");
    printf("Adam's name is %s\n", adam.getName(&adam));

    adam.setAge(&adam, 30);
    printf("Adam's age is %d\n", adam.age);

    adam.setAge(&adam, 18);
    printf("Adam's age is %d\n", adam.getAge(&adam));

    return 0;
}
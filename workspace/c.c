#include <stdio.h>
#include <stdbool.h>
struct person 
{
  char* name;
  int rodzinaid;
};

void main() 
{
    int rodzina[] = {1,2,3,4,5};
    struct person jan={"jan", 0};
    struct person jerzy={"jerzy", 1};
    struct person jozef={"jozef", 2}; 
}
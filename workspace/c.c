#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

char *display()
{
  char* newstr = malloc(sizeof(char) * 100);
  strcpy(newstr, "This is a test");
  newstr = "asd";
  free(newstr);
  newstr = "zmiana";
  newstr = malloc(sizeof(char) * 100);
  return newstr;
}

int main() 
{
  char* test = "test";
  char* lol = display();
  printf("%s", lol);
  return 0;
}
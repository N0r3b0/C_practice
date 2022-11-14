#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* toUperCase(char *arr, int len)
{
  char *output = malloc(len*sizeof(char));
  for(int i = 0; i < len; i++)
  {
    if(output[i] >= 97 && output[i] <= 122)
      output[i] = arr[i]-32;
    else output[i] = arr[i];
  }
  
  return output;
}

char* toLowerCase(char *arr, int len)
{
  char *output = malloc(len*sizeof(char));
  for(int i = 0; i < len; i++)
  {
    if(arr[i] >= 65 && arr[i] <= 90)
      output[i] = arr[i]+32;
    else output[i] = arr[i];
  }
  
  return output;
}

int main()
{
  char *string = "teStOwyStrIasdasdng";
  char *output = string;
  int len = strlen(string);
  output = toLowerCase(string, len);
  printf("\n%s\n", output);
  
  return 0;
}
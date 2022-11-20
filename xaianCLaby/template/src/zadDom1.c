#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

char *replaceFnc(char *str, char sep)
{
    int32_t len = strlen(str);
    char* replacedStr = malloc(len*sizeof(char));
    for(int32_t i = 0; i <= len; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
            replacedStr[i] = str[i]; 
        else
            replacedStr[i] = sep;
    }
    replacedStr[len] = '\0';
    return replacedStr;

}

int main()
{
    char* string1 = "p.rzyk;l@adowy$*  string";
    char sep = '-';
    char* string2 = replaceFnc(string1, sep);
    printf(string2);
    return 0;
}
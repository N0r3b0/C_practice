#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

char *replaceFnc(char *str, char sep)
{
    int len = strlen(str);
    int counter = 0;
    char *replacedStr = malloc(len * sizeof(char));
    while (*str)
    {
        if (*str >= 'A' && *str <= 'Z' || *str >= 'a' && *str <= 'z')
            *replacedStr = *str;
        else if (*(replacedStr - 1) == sep)
        {
            str++;
            continue;
        }
        else
            *replacedStr = sep;
        replacedStr++;
        counter++;
        str++;
    }
    *replacedStr = '\0';
    
    replacedStr -= counter;
    return replacedStr;
}

int main()
{
    char *string1 = "p.rzyk;l@adowy$*  string";
    char sep = '-';
    char *string2 = replaceFnc(string1, sep);
    printf(string2);
    return 0;
}
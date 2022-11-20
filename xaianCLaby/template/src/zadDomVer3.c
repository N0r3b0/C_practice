#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char *replaceFnc(char *str, char sep, uint8_t option) //option == true --> change letters to small or large
{
    int len = strlen(str);
    int counter = 0;
    char *replacedStr = malloc(len * sizeof(char));
    while (*str)
    {
        if (option == true && *str >= 'A' && *str <= 'Z')
            *replacedStr = *str+32; //+32 for replacing small letters with capitals
        else if(option == true && *str >= 'a' && *str <= 'z')
            *replacedStr = *str-32; //-32 for replacing capital letters with smalls

        else if(option == false && *str >= 'A' && *str <= 'Z' || *str >= 'a' && *str <= 'z')
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
    bool option = true;
    char *string2 = replaceFnc(string1, sep, false);
    printf(string2);
    return 0;
}
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

char* toString()
{
    static char string[0];
    sprintf(string, "asdasdasdasdasdasdasdasdasdasd");
    return string;
}

int main(void)
{
    char *arr = toString();
    printf("\n%d\n\n", strlen(arr)); //ilosc znakow w tablicy
    printf("\n%s\n\n", arr);
    printf("\n%c\n\n", arr[22]);
    printf("\n%c\n\n", arr[220]);

    return 0;
}
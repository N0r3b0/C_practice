#include <stdio.h>
#include <stdlib.h>

/* char *przyklad(char *tablica)
{
    int i = 0;
    while (i < 8)
    {
        *tablica = 'X';
        tablica++;
        i++;
    }
    *tablica = '\0';
    return tablica-i;
} */


int main()
{
    /* char *zmienna = "przyklad";
    zmienna = zmienna+6;   //litera 'a' w string "przykład"
    *zmienna = 'x';        //nielegalna operacja, chociaż kompilator nic nie mówi
    printf("%c", *zmienna); */
    /* char zmienna[] = "przyklad";
    char* pointer = &zmienna[0];
    *pointer = 'x';
    printf("%c", *pointer); */
    int* test = malloc(10*sizeof(int));
    *test = 10;
    *test = 15;
    
    printf("%d", *test);

    /*
        char* pointer = przyklad(zmienna);

        //printf("\n%s\n", zmienna);
        int i = 0;
        while(i<8)
        {
            printf("\n%c\n", *pointer);
            pointer++;
            i++;
        } */
}
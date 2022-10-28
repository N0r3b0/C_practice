#include <stdio.h>
#include <stdbool.h>
int rodzina[]={1,2,3,4,5};
void kimJest(int imie1, int imie2) //powiązania między dwiema osobami
{
    if(imie1-imie2 == 1)
        printf("Jest synem");
    if(imie1-imie2 == -1)
        printf("jest ojcem");
    if(imie1-imie2 == 2)
        printf("jest wnukiem");
    if(imie1-imie2 == -2)
        printf("jest dziadkiem");
}


int main() 
{
    int Jerzy = rodzina[0];
    int Jan = rodzina[1];
    int Jozef = rodzina[2];
    kimJest(Jozef, Jan);
    printf("\n");
    return 0;
}
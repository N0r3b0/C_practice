#include<stdio.h>  

int* dodaj(int para1[], int para2[]) 
{
    static int para3[1];
    for (int i = 0; i <= 2; i++)
    {
        para3[i] = para1[i] + para2[i];
    }
    return para3;
}

int* mnoz(int para1[], int para2[]) 
{
    static int para3[1]; //zmienna statyczna, zeby jej wartosc zmieniala się przy kazdym przywolaniu funkcji w mainie
    for (int i = 0; i <= 2; i++)
    {
        para3[i] = para1[i] * para2[i];
    }
    return para3;
}

void drukuj(int para1[])
{
    printf("( ");
    for (int i = 0; i < 2; i++)
    {
        printf("%d ", para1[i]);  //%d --> format dla inta
    }
    printf(")");
}

int main()    
{  
    int paraA[] = {3, 9};
    printf("oto para: A "); drukuj(paraA); printf("\n");

    int paraB[] = {3, 9};
    printf("oto para: B "); drukuj(paraB); printf("\n");

    int* paraC = dodaj(paraA, paraB);   //tworzenie pointera
    printf("po dodaniu "); drukuj(paraC); printf("\n");

    paraC = mnoz(paraA, paraB);
    printf("po mnozeniu "); drukuj(paraC);
return 0;  
}   

#include <stdio.h>
int main ()
{
    //& --> znak wskazujący na adres zmiennej 
    //* --> znak wskazujący na wartośc w adresie

    int zmienna = 5;
    int* pointerDoZmiennej = &zmienna; // int* pointerDoZmiennej = zmienna;  ---> wartośc adresu pointera będzie równa zmiennej
    int* pointer = &zmienna;
    printf("\nWARTOSC ADRESU: %p\n", &zmienna);
    printf("\nWARTOSC ZMIENNEJ: %d\n\n", zmienna);
    printf("\nWARTOSC WSKAZNIKA: %p\n\n", pointer);
    *pointer = 6;
    printf("\nWARTOSC ADRESU: %p\n", &zmienna);
    printf("\nWARTOSC ZMIENNEJ: %d\n\n", zmienna);
    printf("\nWARTOSC WSKAZNIKA: %p\n\n", pointer);

    return 0;
}
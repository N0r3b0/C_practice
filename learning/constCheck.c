#include <stdio.h>

int constFunc(int x)
{
    const int stala = x;
    return stala;
}

int main()
{
    const int stala = 5;
    int zmienna = constFunc(stala);
    printf("\n%d\n", zmienna);
    
    return 0;
}
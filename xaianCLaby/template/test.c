#include <stdio.h>
int test(int* p1, int* p2)
{
    int result = *p1 * *p2;
    return result;
} //za tydzien 11:40

int main()
{
    int zmienna1 = 10;
    int zmienna2 = 15;
    int* pointer1 = &zmienna1;
    int* pointer2 = &zmienna2;
    *pointer2 = test(pointer1, pointer2);
    printf("\n%d, %d, %d, %d\n", *pointer1, *pointer2, zmienna1, zmienna2);
}
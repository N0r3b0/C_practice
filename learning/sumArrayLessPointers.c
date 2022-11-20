#include <stdio.h>
#include <stdlib.h>

int *sumaTablic(int* tab1, int* tab2, int dlg)
{
    int *sum = malloc(dlg*sizeof(int));
    for (int i = 0; i < dlg; i++)
        sum[i] = tab1[i] + tab2[i];

    return sum; 
}
int main()
{
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {1,2,3,4,5};
    int dlg = 5;

    int *sum = sumaTablic(&arr1[0], &arr2[0], dlg);
    for(int i = 0; i < 5; i++)
        printf("%d, ", sum[i]);
}
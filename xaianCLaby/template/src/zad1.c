#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <stdlib.h>
int32_t *arrRet(int32_t *arr1, int32_t *arr2, int32_t len)
{
    int32_t *arr3 = malloc(len * sizeof(int32_t));
    for(int i = 0; i < len; i++)
        arr3[i] = arr1[i] + arr2[i];
    for(int i = 0; i < len; i++)
        printf("\n%d\n", arr3[i]);
    return arr3;
}

int main(void)
{
    int32_t arr1[] = {1,2,3,4,5};
    int32_t arr2[] = {1,2,3,4,5};
    int32_t len = sizeof(arr1)/sizeof(arr1[0]);
    arrRet(arr1, arr2, len);
}
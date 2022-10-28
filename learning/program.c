#include<stdio.h>  
int main()    
{    
    char number3 = 24;
    char number4 = 33;
    char number5 = 11;
    int number = 25;
    int trash1 = 1;
    int trash2 = 2;
    int* number2 = &number;

    printf("number value %ld\n", number);
    printf("number address %x\n", &number);
    printf("\n");
    printf("trash1 value %ld\n", trash1);
    printf("trash1 address %x\n", &trash1);
    printf("\n");
    printf("trash2 value %ld\n", trash2);
    printf("trash2 address %x\n", &trash2);
    printf("\n");
    printf("number2 value %x\n", number2);
    printf("number2 address %x\n", &number2+2);
    printf("\n");
    printf("number3 value %ld\n", number3);
    printf("number3 address %x\n", &number3);
    printf("\n");
    printf("number4 value %ld\n", number4);
    printf("number4 address %x\n", &number4+2);


 return 0;
}   
#include <stdio.h>

short bin(short n)
{
    char a[32] = {0};
    short digNum = 0;
    for (int i=0; n>0; i++)  //loop for bin converting
    {
        a[i] = n % 2;
        n /= 2;
        digNum++;
    }

    //printf("\nBinary Format:");
    /*for (int i=digNum; i>=0; i--) 
    {
        printf("%d", a[i]);
    }*/
   return 0;
}
void binPrint(char arr[])
{
    for (int i=32; i>=0; i--) 
    {
        printf("%d", arr[i]);
    }
}

int main()
{
    short x = 2;
   bin(x);

   short number1 = 60000;
   short number2 = 60000;
   struct bignum
   {
        short num1;
        short num2;
        
   };

    short arr = sizeof(number1);
}
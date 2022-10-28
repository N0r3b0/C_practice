#include<stdio.h>  
int main()    
{    
 int i;
 long long int fact = 1;
 int number;    
 printf("Wprowadz liczbe: ");    
  scanf("%d",&number);    
    for (i = 1; i <= number; i++)
	{    
      fact = fact*i;    
  	}    
 printf("Silnia z %d wynosi: %lld",number,fact);    
return 0;  
}   
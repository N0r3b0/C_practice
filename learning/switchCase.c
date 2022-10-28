#include <stdio.h>
int main()
{
enum tydzien {PON = 1, WT, SR, CZ, PT, SOB, ND};
int n = 10;
goto testowaDyrektywa;
testowaDyrektywa2:
printf("DupaDupaChuj");
switch (n)
{
case PON: printf("Poniedzialek\n");
break;
case WT: printf("Wtorek\n");
break;
case SR: printf("Sroda\n");
break;
case CZ: printf("Czwartek\n");
break;
default: printf("Nie ma takiego dnia\n");
break;
case PT: printf("Piatek\n");
break;
case SOB: printf("Sobota\n");
break;
case ND: printf("Niedziela\n");
break;
}
return 0;

testowaDyrektywa:
goto testowaDyrektywa2;
return 0;
}
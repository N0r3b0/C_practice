#include <stdint.h>
#include <stdio.h>
#include <string.h>
int romanToInt(char* s)
{ 
        uint16_t converted = 0;
        char temp = '0';
        uint8_t len = strlen(s);
        for (uint8_t i = 0; i < len; i++)
        {
            switch(*s) 
            {
                case 'I': 
                    converted += 1;
                    break;
                case 'V': 
                    if(temp == 'I')
                        converted += 3;
                    else converted += 5;
                    break;
                case 'X': 
                    if(temp == 'I')
                        converted += 8;
                    else converted += 10;
                    break;
                case 'L': 
                    if(temp == 'X')
                        converted += 30;
                    else converted += 50;
                    break;
                case 'C': 
                    if(temp == 'X')
                        converted += 80;
                    else converted += 100;
                    break;
                case 'D': 
                    if(temp == 'C')
                        converted += 300;
                    else converted += 500;
                    break;
                case 'M': 
                    if(temp == 'C')
                        converted += 800;
                    else converted += 1000;
                    break;
            }
            temp = *s;
            s++;
        }
        return converted; 
}
int main(void)
{
    char* roman = "MCMXCIV";
    printf("\n%d\n", romanToInt(roman));
    return 0;
}

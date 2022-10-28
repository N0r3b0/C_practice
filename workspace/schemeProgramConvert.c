#include <stdio.h>
#include <stdbool.h>
int p, k;
int fun(int p, int k)
{
    if(p>k)
        return 0;
    else
        return p + fun(p+1, k);
}
int main() 
{
    printf("p jest rowne: ");
    scanf("%d", &p);
    printf("n jest rowne: ");
    scanf("%d", &k);
    printf("%d", fun(p, k));
    printf("\n");
    return 0;
}
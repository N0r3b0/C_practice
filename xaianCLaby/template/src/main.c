#include <stdio.h>
#include <math.h>
#include <stdint.h>

void quadraticF()
{
    double a; double b; double c;
    printf("podaj współczynnik a ");
    scanf("%lf", &a);
    printf("podaj współczynnik b ");
    scanf("%lf", &b);
    printf("podaj współczynnik c ");
    scanf("%lf", &c);

  //a = 0, b = 0, c =0;  //aX^2+bX+C   b^2-4*a*c
  if (a == 0 && b != 0 && c != 0) //bX+c=y funkcja liniowa
    {
      double x = -c / b;
      printf("\nFukncja jest liniowa z miejscem zerowym w punkcie: %f", x);
    }

    else if (a == 0 && b == 0 && c != 0) //funkcja stała
    {
      printf("brak miejsc zerowych");
    }
    else if ((a == 0 && b == 0 && c == 0) || (a == 0 && b != 0 && c == 0) || (a != 0 && b == 0 && c == 0)) //funkcja stała w zerze i liniowa z x0=0
    {
      printf("Miejsce zerowe w zerze");
    }

    else
    {
      double delta = pow(b, 2) - 4 * (a * c); //liczy delte
      if (delta > 0)
        {
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
            printf("miejscami zerowymi funkcji są: %f i  %f\n", x1, x2);
        }

        else if (delta == 0 || delta < 0)
            printf("\nBrak miejsc zerowych");
        } 
    }

int main(void)
{
  quadraticF();
  return 0;
}
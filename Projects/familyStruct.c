#include <stdio.h>
#include <stdbool.h>
int rodzina[]={1,2,3,4,5}; //tworzenie tablicy pokolen
struct person   //tworzenie struktury osoba (imie, pokolenie) 
{
  char* imie;
  int pokolenie;
};
struct person rodzinaS[4]; //tablica struktur osoba

void kimJest(int osoba1, int osoba2) //powiązania między dwiema osobami 
{
    if(osoba1-osoba2 == 1)    //odejmowanie kolejnosci w rodzinie pierwszej osoby od drugiej
        printf("Jest synem"); //rodzina[pradziadek, dziadek, syn, wnuk, etc] -> rodzina[1,2,3,4]
    if(osoba1-osoba2 == -1)   
        printf("jest ojcem");
    if(osoba1-osoba2 == 2)
        printf("jest wnukiem");
    if(osoba1-osoba2 == -2)
        printf("jest dziadkiem");
    if(osoba1-osoba2 == 3)
        printf("Jest prawnukiem");
    if(osoba1-osoba2 == -3)
        printf("Jest pradziadkiem");
}
void wnuk(struct person osoba) //czyim wnukiem jest józef
{ 
  int dlogoscTab = sizeof(rodzina)/sizeof(rodzina[0]); 
    for (int i = 0; i < dlogoscTab; i++)
    {
        if(osoba.pokolenie-rodzina[i] == 2)
        printf("%s ", rodzinaS[i].imie);
    }
}
struct person dodajOsobe(char* imie, int pokolenie)
{
    struct person osoba = {imie, pokolenie}; osoba.pokolenie = rodzina[pokolenie];
    rodzinaS[pokolenie] = osoba;
    return osoba;
}

int main() 
{
    struct person jan = dodajOsobe("Jan", 0);
    struct person jerzy = dodajOsobe("Jerzy", 1);
    struct person janusz = dodajOsobe("Janusz", 2);
    struct person jozef = dodajOsobe("Jozef", 3);
    //kimJest(jozef.pokolenie, jan.pokolenie);
    printf("\n");
    wnuk(jozef);
    printf("\n");
    return 0;
}
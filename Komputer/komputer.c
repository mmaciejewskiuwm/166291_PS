#include <stdio.h>
#include <string.h>
#include "komputer.h"


Komputer makeKomputer(const char *nazwa, double cena, int ileMaLat, bool czyLaptop)
{
    Komputer temp;
    strcpy(temp.nazwa,nazwa);
    temp.cena=cena;
    temp.ileMaLat=ileMaLat;
    temp.czyLaptop=czyLaptop;
    return temp;
}

Komputer makeKomputerCopy(const Komputer *komp)
{
    Komputer temp;
    strcpy(temp.nazwa,komp->nazwa);
    temp.cena=komp->cena;
    temp.ileMaLat=komp->ileMaLat;
    temp.czyLaptop=komp->czyLaptop;
    return temp;
}

void show(const Komputer *komp)
{
    printf("Nazwa komputera: %s. \n",komp->nazwa);
    printf("Cena: %lf.\n",komp->cena);
    printf("Ile ma lat: %d\n",komp->ileMaLat);

    if(komp->czyLaptop)
        printf("Laptop.");
    else
        printf("Stacjonarny.");

}
void postarz(Komputer *komp, int lata)
{
    komp->ileMaLat +=lata;
}



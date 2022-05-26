#include <stdio.h>
#include "komputer.h"
#include <string.h>

bool czyPrawidlowaCena (double cena)
{
    if(cena<10000 && cena>0)
        return true;
    else
        return false;
}
bool czyPrawidlowyWiek (int ileMaLat)
{
    if(2022-ileMaLat<1981)
        return false;
    else
        return true;
}


int main(int argc, char *argv[])
{
    char nazwa;
    double cena;
    int ile;
    int sprawdz;
    bool laptop;
    // 1) Poproś użytkownika o wpisanie danych. Zabezpiecz dane! 1981 r. uznaje się za początek ery komputerów IBM PC - komputerów osobistych. Zakładamy, że cena powinna być z zakresu od 0 do 10000 zł. Napisz odpowiednie funkcje sprawdzające poprawność danych.
    printf("Podaj firme swojego komputera : \n");
    scanf("%s",&nazwa);
    printf("Podaj cene swojego komputera : \n");
    scanf("%lf",&cena);
    if(!czyPrawidlowaCena(cena))
    {
        printf("Nieprawidlowa cena");
        return 0;
    }
    printf("Podaj ile lat ma twoj komputer : \n");
    scanf("%d",&ile);
    if(!czyPrawidlowyWiek(ile))
    {
        printf("Prosze nie klamac !");
        return 0;
    }
    printf("Czy masz laptopa?(1 to tak 0 to nie)");
    scanf("%d",&sprawdz);
    if(sprawdz==1)
        laptop=true;
    else if(sprawdz==0)
        laptop=false;
    else
    {
        printf("zla liczba");
        return 0;

    }
    // 2) Zainicjalizuj strukturę o nazwie komp1 wprowadzonymi danymi.
    Komputer komp1 = makeKomputer(&nazwa,cena,ile,laptop);
    show(&komp1);
    printf("\n");

    // 3) Stwórz strukturę o nazwie komp2 kopiując obiekt komp1.
//        Komputer komp2 = makeKomputerCopy(&komp1);

    // 4) Stwórz strukturę o nazwie komp3 kopiując obiekt komp1.
//        Komputer komp3 = makeKomputerCopy(&komp1);
    // 5) Zmień nazwę komputera komp1 na Dell
       // strcpy(komp1.nazwa,"DeLL")
    // 6) Zmień nazwę komputera komp2 na Lenovo
//        strcpy(komp2.nazwa,"Lenowo")
    // 7) Zmień nazwę komputera komp3 na Asus
      //  strcpy(komp3.nazwa,"Asus")
    // 8) Zmień wiek komputera komp2 na 22 lata
//        komp2.ileMaLat=22;

  //   9) Zmień czyLaptop komputera komp3 na true
//     komp3.czyLaptop = true;
    // 10) Postarz komputer komp1 o 3 lata
//    postarz(&komp1,3);

    // 11) Wypisz informacje o obiektach komp1, komp2, komp3
//    Komputer tab[3];

    // 12) stwórz tablicę o nazwie tab trzech komputerów

    // 13) W pętli for do przechodzenia tablicy zamiast indeksów należy użyć wskaźników, a każdy operator indeksowania należy zastapić operatorem dereferencji!!
    // Przejdź tablicę i wypełnij ją komputerami uzywając odpowiedniej funkcji.
//  for (Komputer *p = tab; p < tab + 3; ++p)
//    {
//        *p = makeKomputer(nazwa, cena, ileMaLat, czyLaptop);
//    }

    // 14) W pętli for do przechodzenia tablicy zamiast indeksów należy użyć wskaźników, a każdy operator indeksowania należy zastapić operatorem dereferencji!!
    // Wypisz informacje o wszystkich obiektach typu Komputer znajdujących sie w tablicy tab
//        for (Komputer *p = tab; p < tab + 3; ++p)
//    {
//        show(p);
//    }


    return 0;
}

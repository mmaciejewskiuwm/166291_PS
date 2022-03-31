#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    const int N = 1000;
    short tab[N];
    printf("Podaj liczbe elementw: ");
    int n;
    scanf("%d", &n);
    if (n <= 0 || n > N)
    {
        printf("Liczba elementw musi byc z przedziau [1, %d\n]!", N);
        return 1;
    }
// Inicjalizuje n pocz ˛ atkowych elementów tablicy
// liczbami o warto´sciach z przedziału [1..lim]
    short lim = 999;
    srand(time(0)); // inicjalizacja generatora liczb pseudolosowych
    for (short *p = tab; p <tab + n; ++p)
    {
        *p = rand() % lim + 1;
    }
// Wypisuje n pocz ˛ atkowych elementów tablicy
    for (short *p = tab; p < tab + n; ++p)
    {
        printf("%5d ", *p);
    }
    printf("\n");
// Modyfikuje n pocz ˛ atkowych elementów tablicy
    for (short *p = tab; p < tab + n; ++p)
    {
        if (*p <= 0)
        {
            continue;
        }
        if (*p % 2 == 1)
        {
            *p = 3 * *p + 1;
        }
        else
        {
            do
            {
                *p /= 2;
            }
            while (*p % 2 == 0);
        }
    }
    printf("\n");
// Wypisuje n pocz ˛ atkowych elementów tablicy
    for (short *p = tab; p < tab + n; ++p)
    {
        printf("%5d ", *p);
    }
    printf("\n");
//(b) kazda nieparzysta liczbe pomnozy przez 2 a kazda parzysta zastapi liczba o przeciwnym znaku;
//nastepnie kazdy dodatni element tablicy zastapi liczba 1, a kazdy ujemny zastapi liczba -1;
    printf("====================B===============(a)\n");
    for (short *p = tab; p < tab + n; ++p)
    {
        if(*p %2 ==1)
        {
            *p *= 2;
        }
        else if(*p %2 ==0)
        {
            *p*= -1;
        }
    }
    for (short *p = tab; p < tab + n; ++p)
    {
        printf("%5d ", *p);
    }
    printf("\n");
    printf("====================B===============(b)\n");
    for (short *p = tab; p < tab + n; ++p)
    {
        if(*p >0)
            *p = 1;
        if(*p <0)
            *p= -1;
    }
    for (short *p = tab; p < tab + n; ++p)
    {
        printf("%5d ", *p);
    }
    printf("====================C===============\n");
    int lewy;
    int prawy;
    int kolejnosc;
    int kolejnosck;
    int kolejnoscp;
    int ilerazy=0;
    printf("podaj liczbe ktora musi byc wieksza lub rowna 0 lecz mniejsza od %d\n",n);
    scanf("%d",&lewy);
    printf("podaj liczbe ktora musi byc wieksza lub rowna lecz mniejsza od %d\n",n);
    scanf("%d",&prawy);
    if(lewy<0 || lewy>=n)
    {
        printf("nieprawdilowa liczba");
        return 1;
    }
    if(prawy<0 || prawy>=n)
    {
        printf("nieprawdilowa liczba");
        return 1;
    }
    if(lewy>prawy)
    {
        kolejnosck = lewy;
        kolejnoscp = prawy;
    }
    else if(prawy>lewy)
    {
        kolejnoscp = lewy;
        kolejnosck = prawy;
    }
    else if(prawy==lewy)
    {
        printf("liczby musza miec inna wartosc ! ");
        return 1;
    }
    for (short *p = tab+kolejnoscp; p < tab + kolejnoscp + kolejnosck; ++p)
    {
        *p=*p-ilerazy;
        ilerazy++;

    }
    for (short *p = tab; p < tab + n; ++p)
    {
        printf("%5d ", *p);
    }
return 0;
}


































#include <stdio.h>
#include <stdlib.h>
int main()
{
    //2.2.3 i 2.2.4 i 2.2.7
    printf("najwiekszy dzielnik tej liczby to \n");
    printf("%d\n",dzielnik());
    printf("2 do potegi ktora podales (zad2.2.4) to %d\n",zad224());
    printf("wynik tego dzialania to %d\n",zad227());
    printf("wartosc ciagu dla tej liczby to(jeszcze nie dziala)  %d\n",zad2221());
    return 0;
}
int deklaracja()
{
    int n;
    printf("podaj liczbe wieksza od 2 a wyswielte ci jej najwiekszy dzielnik\n ");
    scanf("%d",&n);
    if(n<=2)
    {
        printf("miala byc liczba calkowita wieksza od 2 podaj jeszcze raz\n ");
        scanf("%d",&n);
    }
    return n;
}
int dzielnik()
{
    unsigned int n=deklaracja();
    int k=1;
    for(int i=2; i<n; i++)
    {
        if(n%i==0 && i>k)
        {
            k=i;
        }

    }
    return k;
}
int zad224()
{

    int n;
    printf("podaj potenge do ktorej chcesz podniesc 2\n");
    scanf("%d",&n);
    int k;
    k=pow(2,n);
    return k;
}
int zad227()
{
    int n,m,k;
    printf("podaj liczbe n i m pokaze ci wynik dzialania n^m (chociaz jedna z tych wartosci nie moze byc rowna zera)\n");
    scanf("%d",&n);
    scanf("%d",&m);
    if(n==0 && m==0)
    {
        printf("zle zmienne podaj jescze raz\n");
        scanf("%d",&n);
        scanf("%d",&m);
    }
    k=pow(n,m);
    return k;
}
int zad2221()//work in progress
{
    int a,b,c;
    printf("podaj liczbe naturalnom podstawie ja pod ciag i dam wynik ");
    scanf("%d",&a);
    const int rozmiar=a;
    int tab[rozmiar];
    if(a<0)
    {
        printf("zla zmienna podaj jescze raz\n");
        scanf("%d",&a);
    }
    c=1;
    for(int i=0; i<=a; i++)
    {
        if(i==0)
        {
            tab[0]=1;
            b=1;
        }
        tab[i]=2*tab[i-1]+5;
    }
    b=tab[a];
    return b;
}

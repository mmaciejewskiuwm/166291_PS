#include <stdio.h>
#include <stdlib.h>
int zadanie2(int n, int m)
{
    int potenga=1;
    if(n==0 && m==0)
    {
        printf("Conajmniej jedna wartosc musi byc rozna od ");
        return 0;
    }
    for(int i=0; i<m; i++)
    {
        potenga*=n;
    }

    return potenga;
}
int main()
{
    int a=3,b=3;
    printf("wynik dzialania %d do potegi %d to %d",a,b,zadanie2(a,b));
    return 0;
}

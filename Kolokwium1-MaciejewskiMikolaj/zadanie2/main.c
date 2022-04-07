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
    int a=0,b=0;
    printf("%d",zadanie2(a,b));
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int pierwsza_cyfra(int n)
{
    int i=0;
    do
    {
        n=n/10;
        i++;
    }
    while(n>10);
    return n;
}
int main()
{
    int a;
    printf("podaj liczbe a ja podam ci jej pierwsza cyfre\n");
    scanf("%d",&a);
    printf("%d\n",pierwsza_cyfra(a));
    return 0;
}

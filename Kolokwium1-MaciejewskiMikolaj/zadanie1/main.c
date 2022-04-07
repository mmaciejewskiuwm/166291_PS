#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Podaj liczbe naturalna n \n");
    scanf("%d",&n);
    int dod=0,uj=0,zero=0;
    if(n<=0)
    {
        printf("Miala byc liczba naturalna!");
        return 0;
    }
    int tab[n];
    for(int i=0; i<n; i++)
    {
        printf("podaj liczby rzeczywiste\n");
        scanf("%d",&tab[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(tab[i]==0)
            zero+=1;
        else if(tab[i]>0)
            dod+=1;
        else
            uj+=1;
    }
    printf("liczb dodatnich jest %d ujemnych %d oraz jest %d zer ",dod,uj,zero);

    return 0;
}

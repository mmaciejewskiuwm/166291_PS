#include <stdio.h>
#include <stdlib.h>
//int dlugosc(char napis[])
//{
//    int ile=0;
//    char *temp= napis;
//    while(*napis)
//    {
//        ile++;
//       napis++;
//    }
//    return ile;
//}
//int sprawdzma(char napis[],int m)
//{
//    int ile=0;
//    for(int i=0;i<m;i++)
//    {
//        if(napis[i]>='0' && napis[i]<='9')
//            ile++;
//    }
//    return ile;
//
//}
struct Osoba{
char imie[20];
int wiek;
float wzrost;
};
char* najw(struct Osoba tab[],int m)
{
    float najw =0.0f;
    int indeks =0;
    for(int i=0;i<m;i++)
    {
        if(tab[i].wzrost>najw)
        {
            najw=tab[i].wzrost;
            indeks=i;
        }
    }
    return tab[indeks].imie;
}
int main()
{
//    char zmienna[] = "lub1e jesc pl4cki";
//    printf("%d\n",dlugosc(zmienna));
//    printf("%d",sprawdzma(chuj,dlugosc(zmienna)));
    struct Osoba o1={"Majkel",20,1.30};
    struct Osoba o2={"Kasjan",21,1.40};
    struct Osoba o3={"Jaco",28,1.35};
    struct Osoba o4={"Piasek",19,2.01};
    struct Osoba osoby[]={o1,o2,o3,o4};
    printf("%s",najw(osoby,4));

    return 0;
}

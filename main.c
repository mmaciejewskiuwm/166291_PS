#include <stdio.h>
#include <stdlib.h>
// zad 1.2.3
int main()
//{
//    printf("\Napis zawierajace rozne dziwne znaczki // \\\\ $ & %% . \n");
//    return 0;
//}
//zad 1.2.8
//{
//    float a,b,c,d;
//    printf("daj 3 liczby calkowite \n");
//    scanf("%f",&a);scanf("%f",&b);scanf("%f",&c);
//    d=(a+b+c)/3;
//    printf("%.2f ",d);
//    return 0;
//}
//zad 1.2.10
//{
//    int x;
//    printf("podaj liczbe ");
//    scanf("%d",&x);
//    if(x<0)
//    {
//        x=x*(-1);
//    }
//    printf("%d",x);
//    return 0;
//}
//zad 1.3.3
//Napisz program, kt�ry wczytuje ze standardowego wej�cia trzy liczby
//ca�kowite i wypisuje na standardowym wyj�ciu najwi�ksz� z ich warto�ci
//(pami�taj o przypadku gdy wszystkie podane liczby lub dwie
//z nich s� r�wne).
//{
//   int a,b,c;
//   printf("daj 3 liczby calkowite \n");
//   scanf("%d",&a);scanf("%d",&b);scanf("%d",&c);
//   int max=a;
//   if(b>max)
//    max=b;
//   if(c>max)
//    max=c;
//   printf("najwieksza liczba to %d", max);
//   return 0;
//
//}
//zad 1.3.7
//1.3.7 Napisz program, kt�ry wczytuje ze standardowego wej�cia wsp�czynniki
//r�wnania kwadratowego z jedn� niewiadom� i wypisuje na standardowym
//wyj�ciu wszystkie rozwi�zania rzeczywiste tego r�wnania
//lub odpowiedni� informacj� w przypadku braku rozwi�za�.
//{
//    float a,b,c;
//    float rozw1,rozw2,rozw0;
//    printf("daj 3 liczby calkowite \n");
//    scanf("%f",&a);scanf("%f",&b);scanf("%f",&c);
//    float delta;
//    delta= (b*b) - (4*a*c);
//    printf("a = %.0f\n",a );
//    printf("b = %.0f\n",b );
//    printf("c = %.0f\n",c );
//    printf("podstawiamy do wzoru ax^2 + bx + c \n");
//    if(delta<0)
//        printf("brak rozwiazan ");
//    if(delta==0)
//    {
//        rozw0=-1*b/2*a;
//        printf("1 rozwiazanie: %.2f",rozw0);
//    }
//    if(delta>0)
//    {
//        rozw1=((-1*b-sqrt(delta))/2*a);
//        rozw2=((-1*b+sqrt(delta))/2*a);
//        printf("2 rozwiazania: %.2f",rozw1);printf(" %.2f",rozw2);
//    }
//
//    return 0;
//}
//1.3.9
{
    float a,b,wynik;
    char dzial;
    printf("podaj dzialanie jakie chcesz wykonac do wyboru masz *,/,+,- \n");
    scanf("%c", &dzial);
    printf("daj 2 liczby calkowite \n");
    scanf("%f",&a);scanf("%f",&b);
    printf("dzialanie ktore wybrales to %c \n", dzial);
    switch(dzial)
    {
        case '+':
            wynik=a+b;
            printf("wynik to %.2f", wynik);
            break;
        case '-':
            wynik=a-b;
            printf("wynik to %.2f", wynik);
            break;
        case '/':
            wynik=a/b;
            printf("wynik to %.2f", wynik);
            break;
        case '*':
            wynik=a*b;
            printf("wynik to %.2f", wynik);
            break;
        default:
            printf("zly znak");
    }
    return 0;
}





















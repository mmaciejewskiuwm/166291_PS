#include <stdio.h>
#include <stdlib.h>

int main()
{
//    //1.4.2
//    int n,m,wynik;
//    printf("podaj liczbe a potem jaka jej wielokrotnosc chcesz otrzymac\n");
//    scanf("%d\n",&n);
//    scanf("%d",&m);
//    printf("wieloktrotnosci liczby %d \n",n);
//    for(int i=1;i<m+1;i++)
//    {
//        wynik=n*i;
//        printf("%d\n",wynik);
//    }
//    return 0;
//1.4.6
//   int n,m,wynik=1;
//   printf("podaj liczbe calkowita wieksza niz 2\n");
//   scanf("%d",&n);
//   if(n<=2)
//   {
//       printf("miala byc wieksza od 2! podaj jesdzce raz\n");
//        scanf("%d",&n);
//   }
//   if(n%2==0)
//   {
//       for(int i=2;i<=n;i++)
//       {
//           if(i%2==1)
//           {
//            continue;
//           }
//           wynik=wynik*i;
//       }
//   }
//   if(n%2==1)
//   {
//       for(int i=1;i<=n-1;i++)
//       {
//           if(i%2==1)
//           {
//            continue;
//           }
//           wynik=wynik*i;
//       }
//   }
//   printf("%d",wynik);
//1.4.11
//    int a,b,c,d,a1;
//    int x=0,x1=0,x2=0;
//    printf("podaj 4 liczby calk a b c d\n");
//    scanf("%d",&a);scanf("%d",&b);scanf("%d",&c);scanf("%d",&d);
//    //a
//    a1=a;
//    if(a<0)
//    {
//        a=a-1;
//    }
//    printf("podpunkt a \n");
//    do
//    {
//        if((a*x*x)+(b*x)+c>d)
//        {
//            printf("x = %d\n",x);
//            break;
//        }
//        x++;
//    }while(x>0);
//    //b nie zrobione
//x=	2147483647;
//    printf("podpunkt b \n");
//    do
//    {
//     if (((5*x*x)+(a1*x))+b<c)
//     {
//        printf("x =  %d\n",x);
//        break;
//     }
//     x--;
//    }while(x>0);
    //c nie zrobione
//    printf("podpunkt c \n");
//x=0;
//    do
//    {
//    if((5*x*x)+(a*x)+b<=c);
//    {
//        printf("x =  %d\n",x);
//        break;
//    }
//    x++;
//    }while(x>0);

//1.4.14
    int n,a=1,b=1,c=1;
    printf("podaj n\n");
    scanf("%d",&n);
    for(a;a<n;a++)
    {
        if((a*a)+(b*b)==(c*c))
            {
               printf("%d ",a);printf("%d ",b);printf("%d ",c);
            }

        for(b;b<n;b++)
        {
            if((a*a)+(b*b)==(c*c))
            {
               printf("%d ",a);printf("%d ",b);printf("%d ",c);
            }
        }
        for(c;c<n;c++)
        {
            if((a*a)+(b*b)==(c*c))
            {
               printf("%d ",a);printf("%d ",b);printf("%d ",c);

            }
        }
    }

}

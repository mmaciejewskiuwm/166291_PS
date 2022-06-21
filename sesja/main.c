#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
//zad 2
//int potenga(int n,int m)
//{
//    int temp = n;
//    for(int i=1;i<m;i++)
//    {
//        n=n*temp;
//    }
//    return n;
//}
//int chuj(int n)
//{
//    if(n==0)return 0;
//    return (potenga(n,3)+chuj(n-1));
//}
//zad3
//int ruznica(int **tab,int n,int m)
//{
//    int najm=INT_MAX;
//    int najw=INT_MIN;
//    for(int i=0; i<n; i++)
//    {
//        for(int j=0; j<m; j++)
//        {
//            if(tab[i][j]>najw)
//                najw=tab[i][j];
//            if(tab[i][j]<najm)
//                najm=tab[i][j];
//        }
//
//    }
//    return najw-najm;
//}
//void pokasz(int **tab,int n,int m)
//{
//    for(int i=0; i<n; i++)
//    {
//        for(int j=0; j<m; j++)
//        {
//            printf("%3d  ",tab[i][j]);
//        }
//    printf("\n");
//    }
//
//}
//void wypelnij(int **tab,int n,int m)
//{
//    for(int i=0; i<n; i++)
//    {
//        for(int j=0; j<m; j++)
//        {
//            tab[i][j]=((i+7)*(j+3));
//        }
//    }
//}
//void stwurz(int **tab,int n,int m)
//{
//    for(int i=0; i<n; i++)
//    {
//        tab[i]=(int*)malloc(sizeof(int)*m);
//    }
//}
//zad 4
//struct node
//{
//    float x;
//    struct node* next;
//};
//
//struct node* createList()
//{
//    return NULL;
//}
//
//struct node* addElement(struct node* List, float x)
//{
//    struct node* p = malloc(sizeof(struct node));
//    p->x = x;
//    p->next = List;
//    return p;
//}
//
//void printList(struct node* List)
//{
//    struct node* p = List;
//    while(p != NULL)
//    {
//        printf("%f\n", p->x);
//        p = p->next;
//    }
//    printf("=======\n");
//}
//void dupa(struct node* List)
//{
//    struct node* p = List;
//    printf("%d\n",(int)p);
//    while(p->next != NULL)
//    {
//        p = p->next;
//    }
//    printf("%d\n",(int)p);
//}
//char* foo(char* napis1,char* napis2)
//{
//    return NULL;
//}
//int main()
//{
//    int n=5,m=5;
//    int **tab= (int**)malloc(sizeof(int*)*n);
//    stwurz(tab,n,m);
//    wypelnij(tab,n,m);
//    pokasz(tab,n,m);
//    printf("\n");
//    printf("%d",ruznica(tab,n,m));
//    struct node *lista = createList();
//    lista = addElement(lista,  2);
//    lista = addElement(lista,  3);
//    lista = addElement(lista,  12);
//    lista = addElement(lista,  9);
//    lista = addElement(lista,  4);
//    printList(lista);
//    dupa(lista);
//    char* a=NULL;
//    char* b=NULL;
//printf("%d",(int)foo(a,b));

//}
struct Student{
    char* imie;
    int indeks;
    float srednia;
};

float foo(struct Student tab[],int n)
{
    int temp=0;
    for(int i=0;i<n;i++)
    {
        if (tab[temp].indeks< tab[i].indeks)
        {
            temp=i;
        }
    }
    return tab[temp].srednia;
}

int main()
{
   //tu umiesc przypadek testowy
    struct Student st1={"Matusiak",324,2.0};
    struct Student st2={"to",234,2.1};
    struct Student st3={"cos",432,2.2};
    struct Student studenci[] ={st1,st2,st3};
    printf("%lf",foo(studenci,3));

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
//Napisz wskaźnikową wersję funkcji strcpyEven. Funkcja ta ma kopiować co drugi znak z napisu s do napisu t. Zadbaj o koniec napisu - NUL.
char* strcpyEven(char *t, const char *s)
{
    char *temp =t;
    while(*s)
    {
        *t=*s;
        ++t;
        s+=2;
        if(*t == '\0')
            continue;
    }
    return temp;
}

int main(void) {
    char *dest= calloc(50,sizeof(char));
    char napis[] = "kocham uwm";
    strcpyEven(dest,napis);
    printf("%s",dest);
}

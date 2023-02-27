#include <stdlib.h>
#include <stdio.h>

void zamiana (int *a, int *b)
{
    int pom = *a;
    *a = *b;
    *b = pom;
}

void odwroc (int *tab, int tab_size)
{
    for(int i = 0; i < (tab_size-1)/2; i++)
        zamiana(tab+i, tab+tab_size-1-i); 

}

void wymien_tablice (int *tab1, int *tab2, int tab1_size, int tab2_size)
{
        for(int i = 0; i < (tab2_size-1); i++)
            zamiana(tab1+i, tab2 + i);
}

int main()
{
    int a = 7, b = 100; // a) przykladowe wartosci

    printf ("a)\nPRZED ZAMIANA: a = %d, b = %d\n", a, b);

    zamiana(&a,&b);

    printf ("PO ZAMIANIE: a = %d, b = %d\nb)\nTABLICA PRZED ZAMIANA: ", a, b);

    int tab [6] = {1, 2, 3, 4, 5, 6}; // b) przykladowa tablica
    int tab_size = sizeof(tab) / sizeof(int);

    for(int i = 0; i < tab_size; i++)
    printf("%d ", *(tab+i));

    printf("\nTABLICA PO ZAMIANIE:   ");
    odwroc(tab, tab_size);

    for(int i = 0; i < tab_size; i++)
    printf("%d ", *(tab+i));

    printf("\nc)\nTABLICE PRZED WYMIANA\ntablica 1: ");

    int tab1[10] = {1 , 13, 15, 16, 17, 19, 20, 1, 9, 0};   //c) przykladowe tablice
    int tab2[5] = {8, 50, 100, 3, 5};

    int tab1_size = sizeof(tab1)/sizeof(int);
    int tab2_size = sizeof(tab2)/sizeof(int);

    for(int i = 0; i < tab1_size; i++)
    printf("%d ", *(tab1+i));
    printf("\ntablica 2: ");
    for(int i = 0; i < tab2_size; i++)
    printf("%d ", *(tab2+i));

    printf("\nTABLICE PO WYMIANIE\ntablica 1: ");
    wymien_tablice(tab1, tab2, tab1_size, tab2_size);

    for(int i = 0; i < tab1_size; i++)
    printf("%d ", *(tab1+i));

    printf("\ntablica 2: ");

    for(int i = 0; i < tab2_size; i++)
    printf("%d ", *(tab2+i));
    
    return 0;
}

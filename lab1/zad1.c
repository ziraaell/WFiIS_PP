#include <stdio.h>
#include <time.h>
#define N 10

int suma(const int *p, const int *tab);

int main(void)
{
    srand(time(NULL));
    int tab[N];
    int *p = NULL;

    for(p = tab; p < N + tab; p++)
    {
        *p = rand()%(35-7+1)+7;
        printf("p[%d] = %d\n", p-tab+1, *p);
    }
    printf("\n");

    int su = suma(p, tab);
    printf("su = %d\n", su);
    return 0;
}

int suma (const int *p, const int *tab)
{
    if((--p)!=tab)
        return suma(p, tab) + *p;
        else
        return *p;
}

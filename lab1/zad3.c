#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int suma(int *t, int n, int *min, int *maks, double *srednia, double *min_o, double *maks_o)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        if(*min > *(t+i))
            *min = *(t+i);
        if(*maks < *(t+i))
            *maks = *(t+i);
        
        sum += *(t+i);
    }
    *srednia = (double)sum/n;
    *min_o = fabs(*min - *srednia);
    *maks_o = fabs(*maks - *srednia);

    for(int i = 1; i < n; i++)
    {
        if(*maks_o < fabs(*(t+i)- *srednia))
            *maks_o = fabs(*(t+i)- *srednia);
        if(*min_o > fabs(*(t+i)- *srednia))
            *min_o = fabs(*(t+i)- *srednia);
    }
    return sum;

}

int suma_2 (int t[], int n, int *min, int *maks, double *srednia, double *min_o, double *maks_o)
{
    int sum2 = 0;
    for(int i = 0; i < n; i++)
    {
        if(*min>t[i])
            *min = t[i];
        if(*maks < t[i])
            *maks = t[i]; 
        sum2 += t[i];
    }
    *srednia = (double)(sum2)/n;
    *maks_o = fabs (*maks - *srednia);
    *min_o = fabs (*min - *srednia);

     for(int i = 0; i < n; i++)
    {
        if(*min_o> (fabs(t[i] - *srednia)))
            *min_o = fabs(t[i] - *srednia);
        if(*maks_o < (fabs(t[i] - *srednia)))
            *maks_o = fabs(t[i] - *srednia); 
    }


    return sum2;
}

int main()
{
    int tab[5] = {1,2,3,4,6};
    int tab_size = sizeof(tab)/sizeof(int);
    int min = *tab, maks = *tab;
    double srednia, min_o, maks_o;
    int min2 = tab[0], maks2 = tab[0];

    int sum = suma(tab, tab_size, &min, &maks, &srednia, &min_o, &maks_o);
    printf("WSKAZNIKOWA\n\nSuma tab [%d] = %d\nWartosc minimalna = %d\nWartosc maksymalna = %d\nSrednia = %0.2f\nMinimalne odchylenie = %0.2f\nMaksymalne odchylenie = %0.2f\n\n", tab_size, sum, min, maks, srednia, min_o, maks_o);
    
    int sum2 = suma_2(tab, tab_size, &min2, &maks2, &srednia, &min_o, &maks_o);
    printf("INDEKSOWA\n\nSuma tab [%d] = %d\nWartosc minimalna = %d\nWartosc maksymalna = %d\nSrednia = %0.2f\nMinimalne odchylenie = %0.2f\nMaksymalne odchylenie = %0.2f\n", tab_size, sum2, min, maks, srednia, min_o, maks_o);
    return 0;
}

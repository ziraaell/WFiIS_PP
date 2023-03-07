#include <stdio.h>
#include <stdlib.h>

void swap (int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
  return;
}

int find_min_ind (int *tab, int size)
{
  int min_ind = 0, min = *tab;
  for(int i = 1; i < size; i++)
    {
      if(min > *(tab+i))
	{
	  min_ind = i;
	  min = *(tab+i);
	}
    }
  return min_ind;
}

void wypisz_i (int *poczatek, int *koniec)
{
  while (poczatek < koniec)
    printf ("%4d ", *poczatek++);
    printf ("\n");
    return;
}

void sort (int *tab, int size)
{
  for(int i = 0; i < size; i++)
    {
      swap((tab+i), (tab + i  + find_min_ind(tab+i, size - i)));
      printf("%d ", *(tab+i));
    }
  printf("\n");

  return;
}

int main(void)
{
  int tab_A [] = {3,5,33,1,7,9,55,1,11,22,12,6,8,4,44,6,42,2,8,26,64,80,22,12,6,8,4,44,6,42,2,16,5,33,1,7,9,55,1,11,22,34,78,11,21,9,12,5,3,9};

   int size = sizeof(tab_A)/sizeof(int);
   printf("Indeks elementu minimalnego tablicy wynosi %d\n\n", find_min_ind(tab_A, size));

   for(int i = 0; i < size; i+=10)
     {
        wypisz_i ((tab_A+i), (tab_A +i+10));
       int wynik = find_min_ind(tab_A + i, 10);
       printf("Element najmniejszy = %d, indeks elementu najmniejszego = %d, adres elementu najmniejszego = %p\n", *(tab_A+i+wynik),i + wynik, &(*(tab_A+i+wynik)));
     }
       
       printf("\n");

       for(int i = 0; i < size; i+=10)
     {
       printf("Sortowanie tablicy dla indeksow %d do %d: \n", i, i+9);
       sort(tab_A+i, 10);
     }
   return 0;

 }

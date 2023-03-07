#include <stdio.h>
char *do_binar (int, char*);
int main(void)
{
  char  bin_lan[8*sizeof(int) + 1 ];
  int liczba;
  printf("Podaj liczbe do przeliczenia: ");
  scanf("%d", &liczba);
  printf("%d to inaczej %s\n", liczba, do_binar (liczba, bin_lan));
}

char *do_binar(int n, char *w1)
{
  int i;
  static int rozmiar = 8* sizeof(int);

  for ( i = rozmiar - 1; i>=0; i--, n>>=1)
    w1[i] = (01 & n) + '0';
  w1[rozmiar] = '\0';
  return w1;
}
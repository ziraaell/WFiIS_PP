#include <stdio.h>

unsigned bits (unsigned x, unsigned n);
void write_binar (unsigned n, char *wsk);

int main()
{
	unsigned result, number, bit_num;
	printf("Podaj liczbe w systemie dziesietnym: ");
	scanf("%u", &number);
	printf("Podaj ilosc bitow do wypisania: ");
	scanf("%u", &bit_num);

	return 0;
}
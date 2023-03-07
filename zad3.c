#include <stdio.h>
#include <string.h>
#define rozmiar 40
#define rozmiar2 100

int main(int argc, char *argv[])
{
	
	char temp[rozmiar], wynik[rozmiar2]={}; 
	
	if(argc == 0 || argc == 1)
		 printf("Niepoprawna ilosc argumentow");
        else
        {
		for(int i = 1; i < argc; i++)
			printf("%s\n", argv[i]);             
        }

	for(int i = 1; i < argc; i++)
	{	
		int flaga = 1;
		strcpy(temp, argv[i]);
		for(int j = 1; j < argc; j++)
			if (j!=i && strcmp(temp, argv[j]) == 0)
			{
				flaga = 0;
				break;
			}
	if(flaga)
		strcat(wynik, temp);	
}
	printf("%s\n", wynik);
return 0;
}

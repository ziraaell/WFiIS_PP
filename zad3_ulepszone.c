#include <stdio.h>
#include <string.h>
#define rozmiar 100

int main(int argc, char *argv[])
{

        char wynik[rozmiar]={};

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
                for(int j = 1; j < argc; j++)
                        if (j!=i && strcmp(argv[i], argv[j]) == 0)
                        {
                                flaga = 0;
                                break;
                        }
        if(flaga)
                strcat(wynik, argv[i]);
}
        printf("%s\n", wynik);
	return 0;
}     
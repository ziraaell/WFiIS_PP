#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[])
{
	char nap_1[20], nap_2[20];
	strcpy(nap_1, argv[1]);
	strcpy(nap_2, argv[2]);

	printf("A --> napis_1 = %s napis_2 = %s\n", nap_1, nap_2);
	char temp[20]={};
	strcpy(temp, nap_1);
	strcpy(nap_1, nap_2);
	strcpy(nap_2,temp);
	printf("B --> napis_1 = %s napis_2 = %s\n", nap_1, nap_2);
	return 0;
}

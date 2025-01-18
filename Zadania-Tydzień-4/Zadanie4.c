#include <stdio.h>
#include <string.h>


int main()
{
	char zdanie[100];

	printf("Podaj tekst: ");
	fgets(zdanie, sizeof(zdanie), stdin);

	printf("Powiekszony tekst: ");
	for (int i = 0; zdanie[i] > 0; i++)
	{
		if (zdanie[i] >= 'a' && zdanie[i] <= 'z')
		{
			printf("%c", zdanie[i] - ('a' - 'A'));
		}
		else {
			printf("%c", zdanie[i]);
		}
	}

	return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
	char name[100] = "Jan Kowalski";
	char album[] = "123456";

	strcat(name, album);
	printf("\nPolaczone teksty %s\n", name);

	strcpy(name, album);
	printf("Skopiowany tekst %s\n", name);

	size_t len = strlen(name);
	printf("Dlugosc tekstu: %lu", len);

	return 0;
}
#include <stdio.h>
#include <string.h>
#define rozmiar 10

int main() {

	int tab[rozmiar], x = 3;

	for (int i = 0; i < rozmiar; i++)
	{
		tab[i] = x;
		x += 3;

		if (tab[i] % 2)
		{
			printf(" [%d] %d \t", i, tab[i]);
		}
	}

	return 0;
}
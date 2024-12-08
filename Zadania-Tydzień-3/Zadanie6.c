#include <stdio.h>
#define rozmiar 20

int main() {

	int tab[rozmiar] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 10; i < rozmiar; i++)
	{
		tab[i] = tab[i - 10];
	}

	for (int i = 0; i < rozmiar; i++)
	{
		printf("%d\t", tab[i]);
	}

	return 0;
}
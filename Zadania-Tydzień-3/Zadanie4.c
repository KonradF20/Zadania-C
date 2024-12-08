#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define rozmiar 10

int main() { 

	int tab[rozmiar], min = 50;

	srand(time(NULL));

	for (int i = 0; i < rozmiar; i++) {
		tab[i] = rand() % 74 -23;
		printf("%d\t ", tab[i]);
		if (tab[i] < min)
		{
			min = tab[i];
		}
	}
	
	printf("\nMinimalna wartosc tablicy: %d ", min);

	return 0;
}
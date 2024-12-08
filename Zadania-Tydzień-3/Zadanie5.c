#include <stdio.h>
#define rozmiar 10

int main() {

	int tab[rozmiar];

	printf("Podaj pierwsza wartosc tablicy: ");
	scanf_s("%d", &tab[0]);
	printf("Podaj druga wartosc tablicy: ");
	scanf_s("%d", &tab[1]);

	for (int i = 2; i < rozmiar; i++) {
		tab[i] = tab[i - 1] + tab[i - 2];
	}

	for (int i = 0; i < rozmiar; i++) {
		printf("%d\t", tab[i]);
	}

	return 0;
}
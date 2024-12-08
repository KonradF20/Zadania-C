#include <stdio.h>
#define rozmiar  10

int main() {

	int a, tab[rozmiar];

	printf("Podaj liczbe: ");
	scanf_s("%d", &a);

	for (int i = rozmiar - 1; i >= 0; i--) {
		tab[i] = a;
		a -= 5;
		printf("%d\t ", tab[i]);
	}
	
	printf("\nOstatni element tablicy: %d", tab[rozmiar -1]);

	return 0;
}
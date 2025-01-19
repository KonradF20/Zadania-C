#include <stdio.h>
#include <string.h>

int* mniejsza_liczba(int* a, int* b) {
	static int mniejsza; 

	if (*a < *b) {
		mniejsza = *a;
	}
	else {
		mniejsza = *b;
	}

	return &mniejsza;
}

int main() {

	int a, b; 

	printf("Podaj liczbe: ");
	scanf_s("%d", &a);
	printf("Podaj liczbe: ");
	scanf_s("%d", &b);

	int* wynik = mniejsza_liczba(&a, &b);

	printf("Mniejsza liczba to: %d \n", *wynik);
	printf("Adres mniejszej liczby : %p", &wynik);

	return 0;
}
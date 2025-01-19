#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {

	int tablica[] = { 0,2,4,8,10 };
	int a, b;

	printf("Adres pierwszego elemmentu tablicy: %p\n", &tablica[0]);
	printf("Adres czwartego elementu tablicy: %p\n", &tablica[3]);

	printf("Podaj poczatek przedzialu: ");
	scanf_s("%d", &a);
	printf("Podaj koniec przedzialu: ");
	scanf_s("%d", &b);

	srand(time(NULL));

	for (int i = 0; i < 5; i++)
	{
		tablica[i] = a + rand() & (b - a + 1);
		printf("%d element = %d, Adres: %p \n", i, tablica[i], &tablica[i]);
	}

	return 0;
}
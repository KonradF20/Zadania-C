#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int main() {

	int n,liczba, suma = 0;
	srand(time(NULL));

	printf("Podaj ilosc liczb do wylosowania: ");
	scanf_s("%d", &n);

	printf("Wylosowane liczby to: ");
	for (int i = 0; i < n; i++)
	{

		liczba = rand() % 56 - 10;
		printf("%d \t", liczba);

		if (liczba % 2 == 0) {

			suma += liczba;

		}

	}

	printf("\nSuma liczb parzystych wynosi: %d\n", suma);

	return 0;
}
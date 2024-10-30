#include <stdio.h>

int main() {

	int n,suma = 0;

	printf("Podaj dlugosc ciagu: ");
	scanf_s("%d", &n);

	for (int i = 1; i < n; i++)
	{

		if (i % 2 == 0) {

			suma += i;

		}

	}

	printf("\nSuma liczb parzystych wynosi: %d\n", suma);

	return 0;
}
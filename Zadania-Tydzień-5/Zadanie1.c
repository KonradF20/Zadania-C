#include <stdio.h>
#include <string.h>

int silnia(int n);

int main() {
	
	int n;

	printf("Podaj liczbe: ");
	scanf_s("%d", &n);

	int wynik = silnia(n);

	printf("Wynik: %d", wynik);

	return 0;
}

int silnia(int n) {

	if (n == 0)
	{
		return 1;
	}

	return n * silnia(n - 1);
}
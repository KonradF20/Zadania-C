#include <stdio.h>
#include <string.h>

int wyraz(int n);

int main() {

	int n;

	printf("Podaj liczbe: ");
	scanf_s("%d", &n);

	int wynik = wyraz(n);

	printf("Wynik: %d", wynik);

	return 0;
}

int wyraz(int n) {

	if (n == 1)
	{
		return -1;
	}

	return wyraz(n - 1) * (-1) * (n - 2);
}
#include <stdio.h>

int main() {

	int n, i = 1;
	float punkty, suma_punktow = 0, srednia;

	printf("Podaj liczbe studentow: ");
	scanf_s("%d", &n);

	while (i <= n) {
		
		printf("Podaj punkty dla studenta %d: ", i);
		scanf_s("%f", &punkty);
		suma_punktow += punkty;
		i++;
	}

	srednia = suma_punktow / n;

	printf("\nSrednia liczba punktow wynosi: %f\n", srednia);

	return 0;
}
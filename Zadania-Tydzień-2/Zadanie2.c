#include <stdio.h>

int main() {

	int licznikd = 0, liczniku = 0;
	float liczba, sumad = 0, sumau = 0;

	for (int i = 0; i < 10; i++)
	{
		printf("Podaj liczbe: ");
		scanf_s("%f", &liczba);

		if (liczba > 0) {
			sumad += liczba;
			licznikd++;
		}
		else if (liczba < 0) {
			sumau += liczba;
			liczniku++;
		}
	}

	printf("Ilosc liczb dodatnich: %d", licznikd);
	printf("\nSuma liczb dodatnich: %f", sumad);
	printf("\nIlosc liczb ujemnych: %d", liczniku);
	printf("\nSuma liczb ujemnych: %f", sumau);

	return 0;
}
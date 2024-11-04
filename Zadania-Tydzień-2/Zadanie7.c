#include <stdio.h>

int main() {

	int i, j;

	printf("Rezultat 1: \n");
	for (i = 10; i >= 0; i--) {
		for (j = 0; j <= i; j++)
			printf("X");
		printf("\n");
	}

	printf("\nRezultat 2: \n");
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10 - i - 1; j++) 
			printf(" ");
		for (j = 0; j <= i; j++)
			printf("X");
		printf("\n");
	}

	printf("\nRezultat 3: \n");
	for (i = 10; i >= 0; i--) {
		for (j = 10; j >= i; j--)
			printf("X");
		printf("\n");
	}

	printf("\nRezultat 4: \n");
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10 - i - 1; j++)
			printf(" ");
		for (j = 0; j < 2 * i + 1; j++)
			printf("X");
		printf("\n");
	}

	return 0;
}
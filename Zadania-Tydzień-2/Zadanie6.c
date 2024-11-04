#include <stdio.h>

int main() {

	printf(" Ciag liczb: \n");
	for (int i = 1; i <= 100; i++)
	{
		printf("%d \t", i);
	}

	printf("\n Ciag liczb: \n");
	for (int i = 100; i >= 0; i--)
	{
		printf("%d \t", i);
	}

	printf("\n Ciag liczb: \n");
	for (int i = 7; i <= 77; i+=7)
	{
		printf("%d \t", i);
	}

	printf("\n Ciag liczb: \n");
	for (int i = 20; i >= 0; i-=2)
	{
		printf("%d \t", i);
	}

	return 0;
}
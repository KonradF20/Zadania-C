#include <stdio.h>

int main() {

	int tab[2][2] = { 2,5,8,3 }, suma = 0;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (i == j)
			{
				suma = suma + tab[i][j];
			}
			printf("%d\t", tab[i][j]);
		}
	}

	printf("Suma przekatnej macierzy wynosi %d", suma);

	return 0;
}
#include <stdio.h>

int main() {

	int tab[2][2] = { 2,5,8,3 }, tab1[2][2] = { 1,4,6,7 }, suma[2][2];

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			suma[i][j] = tab[i][j] + tab1[i][j];
			printf("%d\t", suma[i][j]);
		}
	}

	return 0;
}
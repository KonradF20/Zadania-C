#include <stdio.h>
#include <string.h>
#define rozmiar 10

int main() {

	int tab[rozmiar], x = 3;

	for (int i = 0; i < rozmiar; i++) 
	{
		tab[i] = x;
		printf("%d \t", tab[i]);
		x += 3;
	}

	return 0;
}
#include <stdio.h>
#include <string.h>

void podniesDoKwadratu(int* liczba) {
    *liczba = (*liczba) * (*liczba);
}

int main() {
   
    int liczba;

    printf("Podaj liczbe, ktora chcesz podniesc do kwadratu: ");
    scanf_s("%d", &liczba);

    podniesDoKwadratu(&liczba);

    printf("Liczba podniesiona do kwadratu wynosi: %d", liczba);

    return 0;
}

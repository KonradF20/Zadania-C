#include <stdio.h>
#include <string.h>

void wypisz_znak(char* znak, int* ilosc_powtorzen) {
    for (int i = 0; i < *ilosc_powtorzen; i++) {
        printf("%c", *znak); 
    }

    (*ilosc_powtorzen)--;
}

int main() {
    
    char znak;
    int ilosc_powtorzen;

    printf("Podaj znak: ");
    scanf_s("%c", &znak);
    printf("Podaj liczbe powtorzen: ");
    scanf_s("%d", &ilosc_powtorzen);

    wypisz_znak(&znak, &ilosc_powtorzen);

    printf("\nPozostala liczba powtorzen: %d", ilosc_powtorzen);

    return 0;
}
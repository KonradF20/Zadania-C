#include <stdio.h>

int main() {
    char kalkulator;
    float a, b, wynik;

    printf("Suma = +");
    printf("\nRoznica = -");
    printf("\nIloczyn = *");
    printf("\nIloraz = /");

    printf("\nWprowadz pierwsza liczbe: ");
    scanf_s("%f", &a);
    printf("Wprowadz druga liczbe: ");
    scanf_s("%f", &b);

    printf("Wprowadz dzialanie (+, -, *, /): ");
    scanf_s(" %c", &kalkulator);

    switch (kalkulator) {
    case '+':
        wynik = a + b;
        printf("%f", wynik);
        break;
    case '-':
        wynik = a - b;
        printf("%f", wynik);
        break;
    case '*':
        wynik = a * b;
        printf("%f", wynik);
        break;
    case '/':
        if (b != 0) {
            wynik = a / b;
            printf("%f", wynik);
        }
        else {
            printf("Blad: Nie mozna dzielic przez zero!");
        }
        break;
    default:
        printf("Blad: Nieznane dzialanie '%c'", kalkulator);
        break;
    }

    return 0;
}
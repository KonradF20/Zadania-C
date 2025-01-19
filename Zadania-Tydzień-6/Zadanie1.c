#include <stdio.h>
#include <string.h>

int main() {
    int a = 5;
    int* wsk = &a;
    int n;
    int* wsk1 = &n;
    int b = 4;
    int* wsk2 = &b;

    printf("Adres zmiennej: %p\n", wsk);

    printf("Podaj wartosc zmiennej: ");
    scanf_s("%d", &n);
    printf("Wartosc zmiennej: %d\n", *wsk1);
    printf("Adres zmiennej: %p\n", wsk1);

    int roznica = *wsk - *wsk1;
    printf("Roznica wynosi: %d\n", roznica);

    int srednia = (*wsk + *wsk1 + *wsk2) / 3;
    printf("Srednia wynosi: %d\n", srednia);

    return 0;
}
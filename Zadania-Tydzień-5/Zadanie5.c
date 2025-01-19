#include <stdio.h>
#include <string.h>

int zamiana(int a) {
    if (a > 1) {
        zamiana(a / 2);
    }
    printf("%d", a % 2);
}

int main()
{
    int liczba;
 
    printf("Podaj liczbe do zamiany na system dwojkowy: \n");
    scanf_s("%d", &liczba);

    printf("Liczba %d w systemie dwojkowym to: ", liczba);

    int wynik = zamiana(liczba);

    return 0;
}

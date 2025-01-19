#include <stdio.h>
#include <string.h>

struct trojkat {
    int bok1;
    int bok2;
    int bok3;
};

int obwod_trojkata(struct trojkat t) {
    return t.bok1 + t.bok2 + t.bok3;
}

int main() {

    struct trojkat t;

    printf("Podaj dlugosc pierwszego boku: ");
    scanf_s("%d", &t.bok1);

    printf("Podaj dlugosc drugiego boku: ");
    scanf_s("%d", &t.bok2);

    printf("Podaj dlugosc trzeciego boku: ");
    scanf_s("%d", &t.bok3);

    int obwod = obwod_trojkata(t);
    printf("Obwod trojkata wynosi: %d", obwod);

    return 0;
}
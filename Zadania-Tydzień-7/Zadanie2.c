#include <stdio.h>
#include <string.h>

struct trojkat {
    int bok1;
    int bok2;
    int bok3;
};

void kopiuj_trojkat(struct trojkat troj1, struct trojkat* troj2) {
    troj2->bok1 = troj1.bok1;
    troj2->bok2 = troj1.bok2;
    troj2->bok3 = troj1.bok3;
}

int main() {

    struct trojkat t1;
    struct trojkat t2;

    printf("Podaj dlugosc pierwszego boku: ");
    scanf_s("%d", &t1.bok1);

    printf("Podaj dlugosc drugiego boku: ");
    scanf_s("%d", &t1.bok2);

    printf("Podaj dlugosc trzeciego boku: ");
    scanf_s("%d", &t1.bok3);

    kopiuj_trojkat(t1, &t2);
    printf("Skopiowany trojkat: bok1 = %d, bok2 = %d, bok3 = %d", t2.bok1, t2.bok2, t2.bok3);

    return 0;
}
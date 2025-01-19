#include <stdio.h>
#include <string.h>

void zamien_wartosci(int* a, int* b) {
    int temp = *a; 
    *a = *b;       
    *b = temp;     
}

int main() {
    
    int a, b;

    printf("Podaj liczbe a: ");
    scanf_s("%d", &a);
    printf("Podaj liczbe b: ");
    scanf_s("%d", &b);

    printf("Przed zamiana: a = %d, b = %d\n", a, b);

    zamien_wartosci(&a, &b);

    printf("Po zamianie: a = %d, b = %d", a, b);

    return 0;
}
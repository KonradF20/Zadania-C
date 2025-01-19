#include <stdio.h>
#include <string.h>

int* oblicz_potege(int* podstawa, int* wykladnik) {
    static int wynik = 1; 

    for (int i = 0; i < *wykladnik; i++) {
        wynik = wynik * *podstawa;
    }

    return &wynik;  
}

int main() {
    
    int podstawa, wykladnik;

    printf("Podaj liczbe: ");
    scanf_s("%d", &podstawa);
    printf("Podaj wykladnik potegi: ");
    scanf_s("%d", &wykladnik);

    int* wynik = oblicz_potege(&podstawa, &wykladnik);
    
    printf("%d do potegi %d wynosi: %d", podstawa, wykladnik, *wynik);

    return 0;
}
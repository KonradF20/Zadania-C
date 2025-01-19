#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int main() {

    int liczbaElementow;

    printf("Podaj liczbe elementow tablicy: ");
    scanf_s("%d", &liczbaElementow);

    int* tablica = (int*)malloc(liczbaElementow * sizeof(int));
    
    if (tablica == NULL) { 
        printf("Blad alokacji pamieci\n");
        return 1;
    }

    int sumaElementow = 0;

    printf("Podaj elementy tablicy: \n");
    
    for (int i = 0; i < liczbaElementow; i++) {
        printf("tablica[%d] = ", i);
        scanf_s("%d", &tablica[i]);
        sumaElementow += tablica[i];
    }

    float sredniaElementow = (float)sumaElementow / liczbaElementow;

    printf("Srednia elementow tablicy wynosi: %f\n", sredniaElementow);
    printf("Elementy wieksze od sredniej: ");
    
    for (int i = 0; i < liczbaElementow; i++) {
        if (tablica[i] > sredniaElementow) {
            printf("%d ", tablica[i]);
        }
    }

    free(tablica);

    return 0;
}

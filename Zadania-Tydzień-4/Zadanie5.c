#include <stdio.h>
#include <string.h>

int main() {

    char liczby[100];

    printf("Podaj dodatnia liczbe calkowita: ");
    fgets(liczby, sizeof(liczby), stdin);

    printf("Podana liczba slownie: ");
    for (int i = 0; i < strlen(liczby); i++) 
    {
        switch (liczby[i]) 
        {
        case '0': printf("zero "); break;
        case '1': printf("jeden "); break;
        case '2': printf("dwa "); break;
        case '3': printf("trzy "); break;
        case '4': printf("cztery "); break;
        case '5': printf("piec "); break;
        case '6': printf("szesc "); break;
        case '7': printf("siedem "); break;
        case '8': printf("osiem "); break;
        case '9': printf("dziewiec "); break;
        default: break;
        }
    }

    return 0;
}
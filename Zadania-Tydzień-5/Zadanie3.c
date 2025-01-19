#include <stdio.h>
#include <string.h>

int NWD(int a, int b)
{
    if (b == 0)
    {
        return a; 
    }
    return NWD(b, a % b);
}

int main()
{
    int a, b;

    printf("Podaj dwie liczby, aby obliczyc ich NWD: \n");
    scanf_s("%d", &a);
    scanf_s("%d", &b);
      
    if (a == 0 && b == 0) {
        printf("Blad: NWD(0, 0) jest niezdefiniowane.\n");
        return 1;
    }

    printf("Najwiekszy wspolny dzielnik liczby %d oraz liczby %d wynosi: %d \n", a, b, NWD(a, b));
    return 0;
}
#include <stdio.h>
#include <string.h>

int Fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1; 
    }
    else {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}

int main() {
    
    int n;

    printf("Podaj pozycje w ciagu Fibonacciego: ");
    scanf_s("%d", &n);

    if (n < 0) {
        printf("Pozycja ciagu Fibonacciego musi byc wieksza lub rowna 0");
    }
    else {
        printf("Pozycja %d ciagu Fibonacciego wynosi: %d", n, Fibonacci(n));
    }

    return 0;

}
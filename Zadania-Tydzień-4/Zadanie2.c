#include <stdio.h>
#include <string.h>

int main() {
   
    for (char i = 'a'; i <= 'z'; i++) {
        printf("%c: %d\n", i, i);
    }

    for (char i = 'A'; i <= 'Z'; i++) {
        printf("%c: %d\n", i, i);
    }

    for (char i = '0'; i <= '9'; i++) {
        printf("%c: %d\n", i, i);
    }
  
    return 0;
}
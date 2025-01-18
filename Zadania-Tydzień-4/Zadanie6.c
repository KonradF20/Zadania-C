#include <stdio.h>
#include <string.h>

int main() {

    char s1[] = "abcdefghijklmnopqrstuvwxyz";
    char s2[] = "zyxwvutsrqponmlkjihgfedcba";
    char tekst[100];
    char tekst1[100];

    printf("Podaj ciag znakow: ");
    fgets(tekst, sizeof(tekst), stdin);

   
    for (int i = 0; tekst[i] > 0; i++) 
    {
        char znak = tekst[i];
        int znajdz = 0;

        for (int j = 0; s1[j] > 0; j++) 
        {
            if (znak == s1[j]) 
            {
                tekst1[i] = s2[j];
                znajdz = 1;
                break;
            }
        }

        if (!znajdz) 
        {
            tekst1[i] = znak;
            tekst1[i] = '\0';
        }

    }

    printf("Zamieniony ciag: %s", tekst1);

    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
    char tekst[1000];
    int samogloski = 0;
    int spolgloski = 0;

    printf("Podaj tekst do sprawdzenia: \n");
    fgets(tekst, sizeof(tekst), stdin);

    char samogloski1[18] = { 'a','A','e','E','i','I','o','O','u','U','y','Y','¹','¥','ê','Ê','ó','Ó' };
    char spolgloski2[36] = { 'b','B','c','C','d','D','f','F','g','G','h','H','j','J','k','K','l','L','m','M','n','N','p','P','r','R','s','S','t','T','w','W','z','Z','x','X' };

    for (int i = 0; tekst[i] != '\0'; i++)
    {
        for (int j = 0; j < 18; j++)
        {
            if (tekst[i] == samogloski1[j])
            {
                samogloski++;
                break;
            }
        }

        for (int j = 0; j < 36; j++)
        {
            if (tekst[i] == spolgloski2[j])
            {
                spolgloski++;
                break;
            }
        }
    }

    printf("Ilosc samoglosek w tekscie to: %d\n", samogloski);
    printf("Ilosc spolglosk w tekscie to: %d\n", spolgloski);

    return 0;
}
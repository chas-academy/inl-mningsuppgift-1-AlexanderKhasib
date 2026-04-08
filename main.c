#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

    // Skapa en Array som kan hålla kasten
    int kast[100];
    // Skapa en Array till tärningen med alla sidor
    int tärning[6] = {0};
    int sum = 0;

    // Starta en for loop och spara 100 rand nummer mellan 1-6 i Kast[i]
    for (int i = 0; i < 100; i++)
    {
        kast[i] = (rand() % 6) + 1;

        // Räkna ut varje gång en sida ökas, ++
        tärning[kast[i] - 1]++;

        // Räkna ut hela summan
        sum += kast[i];
    }

    // Skriver ut summan för varsin sida av tärningen.
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", tärning[i]);
    }

    // Skriver ut totala summan
    printf("%d\n", sum);
    // Beräkna medelvärdet med float och skriv ut
    printf("%.1f\n", sum / 100.0);

    return 0;
}

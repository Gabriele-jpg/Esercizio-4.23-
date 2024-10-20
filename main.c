#include <stdio.h>
#include <math.h>

int main() {
    double y, x = 1;

    printf("Inserisci un numero reale positivo Y: ");
    scanf("%lf", &y);

    while (pow(x, x) < y) {
        x++;
    }
    x--;

    printf("Il massimo numero intero positivo x tale per cui x^x < %.0lf = %.0f\n", y, x);

    return 0;
}

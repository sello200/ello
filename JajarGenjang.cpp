#include <stdio.h>

int main() {
    float alas, tinggi, luas;

    printf("Masukkan alas: ");
    scanf("%f", &alas);

    printf("Masukkan tinggi: ");
    scanf("%f", &tinggi);

    luas = alas * tinggi;

    printf("Luas = %.2f\n", luas);
}

#include <stdio.h>

int main() {
    float panjang, lebar, luas;

    // Input
    printf("Masukkan panjang: ");
    scanf("%f", &panjang);

    printf("Masukkan lebar: ");
    scanf("%f", &lebar);

    // Proses
    luas = panjang * lebar;

    // Output
    printf("Luas persegi panjang = %.2f\n", luas);

    return 0;
}
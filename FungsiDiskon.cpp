#include <stdio.h>

float hitungDiskon(float harga, float diskon) {
    return harga - (harga * diskon / 100);
}

int main() {
    float harga, diskon, total;

    printf("Masukkan harga: ");
    scanf("%f", &harga);

    printf("Masukkan diskon (%%): ");
    scanf("%f", &diskon);

    total = hitungDiskon(harga, diskon);

    printf("Harga setelah diskon = %.2f\n", total);
}

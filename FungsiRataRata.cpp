#include <stdio.h>

float rataRata(float a, float b, float c) {
    return (a + b + c) / 3;
}

int main() {
    float x, y, z, hasil;

    printf("Masukkan tiga angka: ");
    scanf("%f %f %f", &x, &y, &z);

    hasil = rataRata(x, y, z);

    printf("Rata-rata = %.2f\n", hasil);

    return 0;
}

#include <stdio.h>

int main() {
    float p, l, t, volume;

    printf("Masukkan panjang: ");
    scanf("%f", &p);

    printf("Masukkan lebar: ");
    scanf("%f", &l);

    printf("Masukkan tinggi: ");
    scanf("%f", &t);

    volume = p * l * t;

    printf("Volume balok = %.2f\n", volume);

    return 0;
}

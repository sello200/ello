#include <stdio.h>

float luasSegitiga(float a, float t) {
    return 0.5 * a * t;
}

int main() {
    float a, t;

    printf("Masukkan alas: ");
    scanf("%f", &a);

    printf("Masukkan tinggi: ");
    scanf("%f", &t);

    printf("Luas = %.2f\n", luasSegitiga(a, t));
}

#include <stdio.h>

void tampilGenap(int n) {
    int i;

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
}

int main() {
    int n;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    tampilGenap(n);
}

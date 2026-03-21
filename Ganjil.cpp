#include <stdio.h>

int main() {
    int n, i;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    printf("Bilangan ganjil:\n");

    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
}

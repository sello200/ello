#include <stdio.h>

int fpb(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;

    printf("Masukkan dua angka: ");
    scanf("%d %d", &a, &b);

    printf("FPB = %d\n", fpb(a, b));
}

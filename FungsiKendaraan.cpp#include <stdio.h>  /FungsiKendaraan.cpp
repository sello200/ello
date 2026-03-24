#include <stdio.h>
void inputData(char jenis[][20], int jam[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nKendaraan ke-%d\n", i + 1);

        printf("Jenis (mobil/motor/truk): ");
        scanf("%s", jenis[i]);

        printf("Lama parkir (jam): ");
        scanf("%d", &jam[i]);
    }
}

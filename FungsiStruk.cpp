#include <stdio.h>
void cetakStruk(char nama[], char jenis[][20], int jam[], float biaya[], int n) {
    float total = 0;

    printf("\n=== STRUK PARKIR ===\n");
    printf("Nama Pelanggan: %s\n\n", nama);

    for (int i = 0; i < n; i++) {
        printf("Kendaraan ke-%d\n", i + 1);
        printf("Jenis       : %s\n", jenis[i]);
        printf("Lama Parkir : %d jam\n", jam[i]);
        printf("Biaya       : Rp %.0f\n\n", biaya[i]);

        total += biaya[i];
    }

    printf("TOTAL BAYAR : Rp %.0f\n", total);
}

// create by 23343085_wahyu abdil afif 
#include <stdio.h>

int main() {
    int i, j, rows;

    printf("Masukkan jumlah baris: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; ++i) {
        // Membuat loop untuk mencetak bintang sebanyak i pada setiap baris
        for (j = 1; j <= i; ++j) {
            printf("*");
        }
        // Pindah ke baris baru setelah mencetak bintang pada baris saat ini
        printf("\n");
    }

    return 0;
}

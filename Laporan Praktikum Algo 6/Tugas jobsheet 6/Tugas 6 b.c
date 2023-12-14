// create by 23343085_wahyu abdil afif 

#include <stdio.h>

int main() {
    int n;

    printf("Masukkan jumlah baris: ");
    scanf("%d", &n);

    // Loop untuk setiap baris
    for (int i = 1; i <= n; i++) {
        // Loop untuk setiap kolom dalam baris
        for (int j = 1; j <= i; j++) {
            // Menghitung nilai untuk setiap kolom
            int nilai = i * j;

            // Menampilkan nilai
            printf("%d ", nilai);
        }

        // Pindah ke baris baru setelah setiap baris selesai
        printf("\n");
    }

    return 0;
}

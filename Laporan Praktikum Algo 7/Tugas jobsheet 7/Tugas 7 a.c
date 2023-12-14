//create by 23343085_wahyu abdil afif 
#include <stdio.h>

int main() {
    // Deklarasi array untuk menyimpan nilai mahasiswa
    float nilai[20];

    // Input nilai dari pengguna
    printf("Masukkan nilai dari 20 mahasiswa:\n");
    for (int i = 0; i < 20; ++i) {
        printf("Nilai mahasiswa %d: ", i + 1);
        scanf("%f", &nilai[i]);
    }

    // Menghitung rata-rata nilai
    float total = 0;
    for (int i = 0; i < 20; ++i) {
        total += nilai[i];
    }

    float rata_rata = total / 20;

    // Menampilkan hasil rata-rata
    printf("Rata-rata nilai dari 20 mahasiswa: %.2f\n", rata_rata);

    return 0;
}

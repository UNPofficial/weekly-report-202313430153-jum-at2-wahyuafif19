//create by 23343085_wahyu abdil afif 
#include <stdio.h>

int main() {
    int banyakSiswa;

    // Input jumlah mahasiswa
    printf("Input banyak siswa: ");
    scanf("%d", &banyakSiswa);

    // Deklarasi array untuk menyimpan nama mahasiswa
    char namaMahasiswa[banyakSiswa][50]; // Maksimal panjang nama 50 karakter

    // Input nama mahasiswa
    for (int i = 0; i < banyakSiswa; i++) {
        printf("Input nama mahasiswa %d: ", i + 1);
        scanf("%s", namaMahasiswa[i]);
    }

    // Menampilkan nama mahasiswa
    for (int i = 0; i < banyakSiswa; i++) {
        printf("Nama mahasiswa ke-%d: %s\n", i + 1, namaMahasiswa[i]);
    }

    return 0;
}

// create by 23343085_wahyu abdil afif 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struktur untuk menyimpan data mahasiswa
struct Mahasiswa {
    char npm[20];
    char nama[100];
    char tgl_lahir[11];
    char alamat[100];
    char hp[15];
};

int main() {
    // Inisialisasi array untuk menyimpan data mahasiswa
    struct Mahasiswa mahasiswa[50]; // Maksimum 50 mahasiswa (bisa disesuaikan)

    int jumlah_mahasiswa = 0; // Jumlah mahasiswa yang sudah dimasukkan
    char input_lagi;

    do {
        // Input data mahasiswa
        printf("NPM : ");
        scanf("%s", mahasiswa[jumlah_mahasiswa].npm);

        printf("NAMA : ");
        getchar(); // Membersihkan newline karakter dari buffer sebelumnya
        fgets(mahasiswa[jumlah_mahasiswa].nama, sizeof(mahasiswa[jumlah_mahasiswa].nama), stdin);
        mahasiswa[jumlah_mahasiswa].nama[strcspn(mahasiswa[jumlah_mahasiswa].nama, "\n")] = '\0'; // Menghilangkan newline jika ada

        printf("TGL LAHIR (dd-mm-yyyy) : ");
        scanf("%s", mahasiswa[jumlah_mahasiswa].tgl_lahir);

        printf("ALAMAT : ");
        getchar();
        fgets(mahasiswa[jumlah_mahasiswa].alamat, sizeof(mahasiswa[jumlah_mahasiswa].alamat), stdin);
        mahasiswa[jumlah_mahasiswa].alamat[strcspn(mahasiswa[jumlah_mahasiswa].alamat, "\n")] = '\0';

        printf("HP : ");
        scanf("%s", mahasiswa[jumlah_mahasiswa].hp);

        // Menampilkan data yang dimasukkan
        printf("\nData Mahasiswa:\n");
        printf("%s %s %s %s %s\n", mahasiswa[jumlah_mahasiswa].npm, mahasiswa[jumlah_mahasiswa].nama,
               mahasiswa[jumlah_mahasiswa].tgl_lahir, mahasiswa[jumlah_mahasiswa].alamat, mahasiswa[jumlah_mahasiswa].hp);

        // Menambah jumlah mahasiswa
        jumlah_mahasiswa++;

        // Memeriksa apakah ingin memasukkan data lagi
        printf("\nMau memasukkan data lagi [y/t]? ");
        scanf(" %c", &input_lagi);

    } while (input_lagi == 'y' || input_lagi == 'Y');

    printf("\nData Mahasiswa yang telah dimasukkan:\n");

    // Menampilkan semua data mahasiswa yang telah dimasukkan
    for (int i = 0; i < jumlah_mahasiswa; i++) {
        printf("%s %s %s %s %s\n", mahasiswa[i].npm, mahasiswa[i].nama,
               mahasiswa[i].tgl_lahir, mahasiswa[i].alamat, mahasiswa[i].hp);
    }

    return 0;
}


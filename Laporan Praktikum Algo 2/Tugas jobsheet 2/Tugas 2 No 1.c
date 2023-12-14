// create by 23343085_wahyu abdil afif
#include <stdio.h>

int main() {
    // Menampilkan pesan permulaan
    printf("Hello, siapa nama lengkapmu?\n");

    // Mendeklarasikan variabel untuk menyimpan nama lengkap
    char nama[100];

    // Menerima input dari pengguna
    fgets(nama, sizeof(nama), stdin);

    // Menampilkan pesan selamat datang
    printf("Selamat Datang %s dalam Pemrograman C!\n", nama);

    return 0;
}

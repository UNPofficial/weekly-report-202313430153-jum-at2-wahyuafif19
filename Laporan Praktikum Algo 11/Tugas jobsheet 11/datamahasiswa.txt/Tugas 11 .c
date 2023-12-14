//create by 23343085_wahyu abdil afif

#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("datamahasiswa.txt", "w"); // Membuka file untuk ditulis (write)

    if (file == NULL) {
        printf("Gagal membuka file.\n");
        return 1; // Keluar dari program dengan status error
    }

    int jumlahMahasiswa;

    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlahMahasiswa);

    for (int i = 1; i <= jumlahMahasiswa; ++i) {
        printf("\nMasukkan data untuk mahasiswa ke-%d:\n", i);

        fprintf(file, "Data mahasiswa ke-%d\n", i);

        char nama[50];
        printf("Nama: ");
        scanf("%s", nama);
        fprintf(file, "Nama: %s\n", nama);

        char nim[15];
        printf("NIM: ");
        scanf("%s", nim);
        fprintf(file, "NIM: %s\n", nim);

        char jurusan[50];
        printf("Jurusan: ");
        scanf("%s", jurusan);
        fprintf(file, "Jurusan: %s\n", jurusan);

        char programStudi[50];
        printf("Program Studi: ");
        scanf("%s", programStudi);
        fprintf(file, "Program Studi: %s\n", programStudi);

        fprintf(file, "\n"); // Pindah baris antar mahasiswa
    }
   
    fclose(file); // Menutup file setelah selesai

    printf("Data mahasiswa telah disimpan dalam datamahasiswa.txt\n");

    return 0; // Keluar dari program dengan status sukses 
}



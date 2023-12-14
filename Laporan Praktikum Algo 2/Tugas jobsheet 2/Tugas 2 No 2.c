// create by 23343085_wahyu abdil afif
#include <stdio.h>

int main() {
    // Deklarasi variabel
    char nama[100], nim[15], prodi[50], fakultas[50];
    float nilaiPraktikum, nilaiUTS, nilaiUAS, nilaiAkhir;

    // Meminta input dari pengguna
    printf("Nama: ");
    fgets(nama, sizeof(nama), stdin);

    printf("NIM: ");
    fgets(nim, sizeof(nim), stdin);

    printf("Prodi: ");
    fgets(prodi, sizeof(prodi), stdin);

    printf("Fakultas: ");
    fgets(fakultas, sizeof(fakultas), stdin);

    printf("Nilai Praktikum: ");
    scanf("%f", &nilaiPraktikum);

    printf("Nilai UTS: ");
    scanf("%f", &nilaiUTS);

    printf("Nilai UAS: ");
    scanf("%f", &nilaiUAS);

    // Menghitung nilai akhir
    nilaiAkhir = 0.3 * nilaiPraktikum + 0.3 * nilaiUTS + 0.4 * nilaiUAS;

    // Menampilkan output
    printf("\nOutput:\n");
    printf("Nama: %s", nama);
    printf("NIM: %s", nim);
    printf("Prodi: %s", prodi);
    printf("Fakultas: %s", fakultas);
    printf("Nilai Praktikum: %.2f\n", nilaiPraktikum);
    printf("Nilai UTS: %.2f\n", nilaiUTS);
    printf("Nilai UAS: %.2f\n", nilaiUAS);
    printf("Nilai Akhir: %.2f\n", nilaiAkhir);

    return 0;
}

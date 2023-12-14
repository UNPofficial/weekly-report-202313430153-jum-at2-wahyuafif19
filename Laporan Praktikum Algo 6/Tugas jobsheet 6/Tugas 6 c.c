// create by 23343085_wahyu abdil afif 
#include <stdio.h>

// Inisialisasi data nasabah
char namaAkun[] = "Hattori";
int noRek = 123;
int saldo = 175000;
int saldoMinimal = 50000;

// Fungsi untuk menampilkan menu ATM
void tampilkanMenu() {
    printf("\nATM\n");
    printf("1) Cek Saldo\n");
    printf("2) Setoran\n");
    printf("3) Penarikan Tunai\n");
    printf("4) Exit\n");
}

// Fungsi untuk mengecek saldo
void cekSaldo() {
    printf("Saldo Anda saat ini: Rp. %d\n", saldo);
}

// Fungsi untuk melakukan setoran
void setoran() {
    int jumlahSetoran;
    printf("Masukkan jumlah setoran: Rp. ");
    scanf("%d", &jumlahSetoran);

    saldo += jumlahSetoran;
    printf("Setoran berhasil. Saldo Anda saat ini: Rp. %d\n", saldo);
}

// Fungsi untuk melakukan penarikan tunai
void penarikanTunai() {
    int jumlahPenarikan;
    printf("Masukkan jumlah penarikan: Rp. ");
    scanf("%d", &jumlahPenarikan);

    if (saldo - jumlahPenarikan >= saldoMinimal) {
        saldo -= jumlahPenarikan;
        printf("Penarikan tunai berhasil. Saldo Anda saat ini: Rp. %d\n", saldo);
    } else {
        printf("Saldo tidak mencukupi untuk penarikan tunai.\n");
    }
}

int main() {
    int pilihan;

    do {
        tampilkanMenu();
        printf("Masukkan pilihan (1-4): ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                cekSaldo();
                break;
            case 2:
                setoran();
                break;
            case 3:
                penarikanTunai();
                break;
            case 4:
                printf("Terima kasih. Keluar dari ATM.\n");
                break;
            default:
                printf("Pilihan tidak valid. Silakan masukkan pilihan yang benar.\n");
        }
    } while (pilihan != 4);

    return 0;
}


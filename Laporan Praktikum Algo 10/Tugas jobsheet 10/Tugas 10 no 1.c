// create by 23343085_wahyu abdil afif 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Enumerasi untuk kondisi tebakan
enum GuessCondition {
    TOO_LOW,
    TOO_HIGH,
    CORRECT
};

// Fungsi untuk memulai permainan
void playGame() {
    // Menghasilkan nomor acak antara 1 dan 20
    srand(time(NULL));
    int computerNumber = rand() % 20 + 1;

    int guess, attempts = 0;
    enum GuessCondition condition;

    printf("Selamat datang dalam permainan Tebak Angka!\n");

    do {
        // Menerima tebakan dari pemain
        printf("Masukkan tebakan Anda (1-20): ");
        scanf("%d", &guess);
        attempts++;

        // Memeriksa kondisi tebakan
        if (guess < computerNumber) {
            condition = TOO_LOW;
            printf("Nomor saya lebih besar!\n");
        } else if (guess > computerNumber) {
            condition = TOO_HIGH;
            printf("Nomor saya lebih kecil!\n");
        } else {
            condition = CORRECT;
            printf("Selamat, Anda benar!\n");
            printf("Jumlah percobaan: %d\n", attempts);
        }
    } while (condition != CORRECT);

    // Menanyakan apakah pemain ingin bermain lagi
    char playAgain;
    printf("Ingin bermain lagi? (y/n): ");
    scanf(" %c", &playAgain);

    if (playAgain == 'y' || playAgain == 'Y') {
        system("cls || clear"); // Membersihkan layar konsol
        playGame(); // Memulai permainan baru
    } else {
        printf("Terima kasih telah bermain!\n");
    }
}

int main() {
    playGame(); // Memulai permainan pertama
    return 0;
}

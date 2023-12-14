// create by 23343085_wahyu abdil afif
#include <stdio.h>

// Struktur untuk menyimpan informasi zodiak
struct Zodiac {
    char name[20];        // Nama zodiak
    int start_day, end_day, start_month, end_month;  // Rentang tanggal lahir zodiak
};

// Fungsi untuk menentukan zodiak berdasarkan tanggal lahir
void determineZodiac(int day, int month, struct Zodiac zodiacs[], int numZodiacs) {
    int i;

    for (i = 0; i < numZodiacs; i++) {
        // Memeriksa apakah tanggal lahir berada dalam rentang zodiak
        if ((month == zodiacs[i].start_month && day >= zodiacs[i].start_day) || 
            (month == zodiacs[i].end_month && day <= zodiacs[i].end_day)) {
            printf("Zodiak Anda adalah: %s\n", zodiacs[i].name);
            return;
        }
    }

    // Jika tanggal lahir tidak cocok dengan zodiak apapun
    printf("Tanggal lahir tidak valid.\n");
}

int main() {
    int day, month, year;

    // Array of structures untuk zodiak
    struct Zodiac zodiacs[] = {
        {"AQUARIUS", 20, 18, 2, 19},
        {"PISCES", 19, 20, 3, 20},
        {"ARIES", 21, 19, 4, 19},
        {"TAURUS", 20, 20, 5, 20},
        {"GEMINI", 21, 20, 6, 20},
        {"CANCER", 21, 22, 7, 22},
        {"LEO", 23, 22, 8, 22},
        {"VIRGO", 23, 22, 9, 22},
        {"LIBRA", 23, 22, 10, 22},
        {"SCORPIO", 23, 21, 11, 21},
        {"SAGITTARIUS", 22, 21, 12, 21},
        {"CAPRICORN", 22, 19, 1, 19}
    };

    // Menerima input tanggal lahir dari pengguna
    printf("Masukkan Tanggal Lahir Anda [tgl-bln-tahun]: ");
    scanf("%d-%d-%d", &day, &month, &year);

    // Menampilkan tanggal lahir yang dimasukkan
    printf("Tanggal Lahir Anda: %d-%d-%d\n", day, month, year);

    // Menentukan zodiak berdasarkan tanggal lahir
    determineZodiac(day, month, zodiacs, sizeof(zodiacs) / sizeof(zodiacs[0]));

    return 0;
}


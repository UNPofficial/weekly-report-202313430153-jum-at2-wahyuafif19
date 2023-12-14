//create by 23343085_wahyu abdil afif 
#include <stdio.h>
#include <string.h>

// Fungsi untuk memeriksa kecocokan username dan password
int cekLogin(char username[], char password[]) {
    // Gantilah dengan informasi login yang benar
    char usernameBenar[] = "pengguna";
    char passwordBenar[] = "rahasia";

    // Memeriksa kecocokan
    if (strcmp(username, usernameBenar) == 0 && strcmp(password, passwordBenar) == 0) {
        return 1; // Login berhasil
    } else {
        return 0; // Login gagal
    }
}

int main() {
    char username[50];
    char password[50];

    // Meminta input username dan password dari pengguna
    printf("Masukkan username: ");
    scanf("%s", username);
    printf("Masukkan password: ");
    scanf("%s", password);

    // Memeriksa login
    if (cekLogin(username, password)) {
        printf("Berhasil login\n");
    } else {
        printf("Password salah\n");
    }

    return 0;
}

// create by 23343085_Wahyu Abdil Afif
#include <stdio.h>

int main() {
    char nama[50], email[50];

    printf("Nama: ");
    fgets(nama, sizeof(nama), stdin);

    printf("Email: ");
    fgets(email, sizeof(email), stdin);

    printf("\n------------------\n");
    printf("Nama anda: %s", nama);
    printf("Alamat email: %s", email);

    return 0;
}

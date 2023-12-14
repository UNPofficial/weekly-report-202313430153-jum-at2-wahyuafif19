// create by 23343085_Wahyu Abdil Afif
#include <stdio.h>

void main(){
	// membuat array karakter untuk menyimpan password
	char password[30];
	
	printf("=== Program login ===\n");
	printf("Masukan password: ");
	scanf("%s", &password);
	
	// percabangan if/else 
	if( strcmp(password, "kopi") == 0 ){
		printf("Selamat datang bos!\n");
	} else {
		printf("Password salah, coba lagi!\n");
	}
	
	printf("Terimakasih sudah menggunakan aplikasi ini!\n");
}

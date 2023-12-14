// create by 23343085_wahyu abdil afif
#include <stdio.h>

enum hari {SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU};

void main(){
	enum hari sekarang;
	sekarang = RABU;
	printf("Sekarang hari ke-%d", sekarang + 1);
}
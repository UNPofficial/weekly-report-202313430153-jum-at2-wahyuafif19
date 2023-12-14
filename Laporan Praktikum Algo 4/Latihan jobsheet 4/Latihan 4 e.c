// create by 23343085_Wahyu Abdil Afif
#include <stdio.h>

void main(){
	int a, b;
	
	// pengisian nilai dengan operator =
	a = 5;
	b = 10;
	
	// pengisian sekaligus penambahan
	b += a; // ini sama seperti b = b + a
	printf("Hasil b += a adalah %d\n", b);
	
	// pengisian sekaligus penambahan
	b -= a; // ini sama seperti b = b - a
	printf("Hasil b -= a adalah %d\n", b);
	
	// pengisian sekaligus penambahan
	b *= a; // ini sama seperti b = b * a
	printf("Hasil b *= a adalah %d\n", b);
	
	// pengisian sekaligus penambahan
	b /= a; // ini sama seperti b = b / a
	printf("Hasil b /= a adalah %d\n", b);
	
	// pengisian sekaligus penambahan
	b %= a; // ini sama seperti b = b % a
	printf("Hasil b %= a adalah %d\n", b);
}

// create by 23343085_wahyu abdil afif 
#include <stdio.h>

int main(){ 
	int nilai;
	char grade;
	
	printf("=== Program Grade Nilai ===\n");
	printf("Inputkan nilai: ");
	scanf("%i", &nilai);
	
	// menggunakan percabangan if/else/if
	if (nilai >= 90) {
		grade = 'A';
	} else if (nilai >= 80){
		grade = 'B'; // seharusnya B+
	} else if (nilai >= 70){
		grade = 'B';
	} else if (nilai >= 60){
		grade = 'c'; // seharusnya c+
	} else if (nilai >= 50){
		grade = 'c';
	} else if (nilai >= 40){
		grade = 'D';
	} else if (nilai >= 30){
		grade = 'E';
	} else {
		grade = 'F';
	}
	
	printf("Nilai: %i\n" , nilai);
	printf("Grade anda: %c\n" , grade);
}

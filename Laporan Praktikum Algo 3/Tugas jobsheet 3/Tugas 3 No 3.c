// create by 23343085_wahyu abdil afif
#include <stdio.h>

// Deklarasi konstanta untuk nilai Phi
#define PI 3.14159265358979323846

int main() {
    // Deklarasi variabel
    float diameter, radius, volume, surfaceArea;

    // Input diameter bola basket
    printf("Masukkan diameter bola basket (cm): ");
    scanf("%f", &diameter);

    // Menghitung radius
    radius = diameter / 2.0;

    // Menghitung volume bola
    volume = (4.0 / 3.0) * PI * radius * radius * radius;

    // Menghitung luas permukaan bola
    surfaceArea = 4.0 * PI * radius * radius;

    // Menampilkan hasil perhitungan
    printf("Volume bola: %.2f cm^3\n", volume);
    printf("Luas permukaan bola: %.2f cm^2\n", surfaceArea);

    return 0;
}

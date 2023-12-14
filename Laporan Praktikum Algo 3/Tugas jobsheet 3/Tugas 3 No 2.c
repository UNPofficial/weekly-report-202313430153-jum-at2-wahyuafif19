// create by 23343085_wahyu abdil afif

#include <stdio.h>

int main() {
    // Deklarasi variabel
    float celcius, kelvin, fahrenheit, reamur;

    // Input suhu dalam Celcius dari keyboard
    printf("Input Suhu (Celcius)         = ");
    scanf("%f", &celcius);

    // Konversi suhu ke Kelvin, Fahrenheit, dan Reamur
    kelvin = celcius + 273.15;
    fahrenheit = (celcius * 1.8) + 32;
    reamur = celcius * 0.8;

    // Output hasil konversi suhu
    printf("Suhu dalam Kelvin            = %.2f\n", kelvin);
    printf("Suhu dalam Fahrenheit        = %.2f\n", fahrenheit);
    printf("Suhu dalam Reamur            = %.2f\n", reamur);

    return 0;
}


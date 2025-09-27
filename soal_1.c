#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float kecepatan;
    float waktu;
    float jarak;

    scanf("%f", &jarak);
    scanf("%f", &waktu);
    kecepatan = jarak / waktu;
    printf("%.3f", kecepatan);
}
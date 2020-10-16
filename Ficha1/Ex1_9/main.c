#include <stdio.h>

int main(){
    float a, b, area, per;
    printf("Insira a altura e comprimento do retangulo:\n");
    scanf("%f %f", &a, &b);
    area = a * b;
    per = 2 * (a + b);
    printf("Area = %0.4f\nPerimetro = %0.4f\n", area, per);
    return 0;
}
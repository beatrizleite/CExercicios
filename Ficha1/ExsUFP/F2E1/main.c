#include <stdio.h>

void mms();
int main() {
    mms();
    return 0;
}
void mms(void){
    int a, b, c;
    int soma;
    printf("Insira 3 numeros, cada um separado por um espaco:\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c){
        printf("Maior numero: %d\n", a);
        if(b > c){
            soma = a + b;
            //printf("sum: %d\n", soma);
        }
    } else if (b > c){
        printf("Maior numero: %d\n", b);
    } else {
        printf("Maior numero: %d\n", c);
    }

    if(a < b && a < c){
        printf("Menor numero: %d\n", a);
    } else if (b < c){
        printf("Menor numero: %d\n", b);
    } else {
        printf("Menor numero: %d\n", c);
    }
    printf("Sum: %d", soma);
}

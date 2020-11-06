#include <stdio.h>
//soma dos digitos de um numero
int main() {
    int n, resto, sum = 0;
    printf("Insira um numero inteiro: ");
    scanf("%d", &n);
    while(n > 0){
        resto = n % 10;
        sum = sum + resto;
        n /= 10;
    }
    printf("Soma: %d", sum);
    return 0;
}

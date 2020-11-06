#include <stdio.h>

int main() {
    int n, hi = 0, resto;
    printf("Insira um numero inteiro: ");
    scanf("%d", &n);

    while(n != 0){
        resto = n % 10;
        hi = hi * 10 + resto;
        n /= 10;
    }
    printf("Capicua: %d", hi);
    return 0;
}

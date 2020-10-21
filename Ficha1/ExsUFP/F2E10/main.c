#include <stdio.h>

int main() {
    int n = 0, i;
    printf("Insere um numero entre 1 e 10 para apresentar a sua tabuada: ");
    scanf("%d", &n);
    while(n>10 || n<0){
        scanf("%d", &n);
    }

    for(i = 1; i <= 10; i++){
        printf("\n%d * %d = %d", n, i, i * n);
    }
}

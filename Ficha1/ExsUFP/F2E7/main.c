#include <stdio.h>

int main() {
    int n1, n2, mdc, mmc, i;
    printf("Insira 2 numeros inteiros:");
    scanf("%d %d", &n1, &n2);
    //ciclo for para encontrar o maximo divisor comum entre os dois numeros
    for(i=1; i <= n1 && i <= n2; i++){
        if(n1 % i == 0 && n2 % i == 0){
            mdc = i;
        }
    }
    //regra para calcular o mmc com o mdc ou vice-versa
    mmc = (n1 * n2) / mdc;
    printf("O MMC entre %d e %d e %d", n1, n2, mmc);
    return 0;
}

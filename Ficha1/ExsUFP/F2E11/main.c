#include <stdio.h>

int main() {
    int num, i;
    int sum = 0;
    printf("Insira numero p testar: ");
    scanf("%d", &num);
    for(i = 1; i < num; i++){
        if(num % i == 0){ // cada i que dividir o numero e tiver resto 0, acrescenta-se para a soma p verificar se o num é perfeito
            sum += i;
        }
    }
    if(num == sum){
        printf("%d e um numero perfeito.", num);
    } else {
        printf("%d nao e um numero perfeito.", num);
    }
    return 0;
}

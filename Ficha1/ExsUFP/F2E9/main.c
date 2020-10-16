#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Insira limite maximo para efetuar o calculo:\n");
    scanf("%d", &num);
    for(int i = 1; i <= num; i++){ //percorre numeros de 1 a N
        if(i % 2 == 0){ //verifica se i tem resto zero e, se sim, adiciona à soma (é par)
            sum += i;
        }
    }
    printf("Soma: %d", sum);
    return 0;
}
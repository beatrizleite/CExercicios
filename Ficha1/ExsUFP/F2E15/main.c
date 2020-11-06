#include <stdio.h>
int ano_bissexto(int ano_class);
int main() {
    int ano, resto;
    printf("Insira ano: ");
    scanf("%d", &ano);

    resto = ano_bissexto(ano);
    switch(resto){
        case 1:
            printf("Ano bissexto.");
            break;
        case 0:
            printf("Nao ano bissexto.");
            break;
        default:
            printf("Invalid.");
    }
    return 0;
}
int ano_bissexto(int ano_class){
    int resultado;
    resultado = ((ano_class % 4 == 0) && ((ano_class % 400 == 0) || (ano_class % 100 != 0)));
    return resultado;
}

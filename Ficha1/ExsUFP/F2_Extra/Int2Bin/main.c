#include <stdio.h>
long Dec2Binary(int n){
    long binaryNum = 0;
    int resto, temp = 1;

    while(binaryNum != 0){
        resto = n % 2;
        n /= 2;
        binaryNum = binaryNum + resto * temp;
        temp = temp * 10;
    }
    return binaryNum;
}
int main() {
    int n;
    printf("Insira o numero inteiro: ");
    scanf("%d", &n);
    printf("Numero em binario: %ld", Dec2Binary(n));
    return 0;
}
#include <stdio.h>
int soma2maiores(int a, int b, int c);
int main() {
    int a, b, c;
    printf("nums pls");
    scanf("%d %d %d", &a, &b, &c);
    soma2maiores(a, b, c);
    printf("oi? %d", soma2maiores(a, b, c));
    return 0;
}
int soma2maiores(int a, int b, int c){

    if(c < a && c < b){
        return a + b;
    } else if(b < a && b < c){
        return a + c;
    } else {
        return b + c;
    }
}
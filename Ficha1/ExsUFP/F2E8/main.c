#include <stdio.h>

int main() {
    int sum = 0;
    for(int i = 0; i <= 1000; i++){
        if(i % 2 == 0){
            sum = sum + i;
        }
    }
    printf("Soma: %d", sum);
    return 0;
}

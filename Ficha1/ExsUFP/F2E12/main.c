#include <stdio.h>

int main() {

}
int main3(){
    int num,temp,factor=1;

    printf("Enter a number: ");
    scanf("%d",&num);
    num = 1014;
    temp=num;
    while(temp){
        temp=temp/10;
        factor = factor*10;
    }
    while(factor>1){
        factor = factor/10;
        //num/factor;
        num = num % factor;
    }
}
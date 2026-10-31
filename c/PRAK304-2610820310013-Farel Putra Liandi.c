#include <stdio.h>

int main(){

    int num;
    scanf("%d", &num);

    if(num == 0){
        printf("Nol");
    }
    else if(num > 0 && num < 10){
        printf("Satuan");
    }
    else if (num == 10){
        printf("Puluhan");
    }
    else if(num > 10 && num < 20){
        printf("Belasan");
    }
    else if(num >= 20 && num < 99){
        printf("Puluhan");
    }
    else{
        printf("Anda Menginput Melebihi Bilangan");
    }

    return 0;
}
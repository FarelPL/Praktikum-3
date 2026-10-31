#include <stdio.h>

int main(){

    int a, b, c, simpan;
    scanf("%d %d %d",&a,&b,&c );

    if(a > b){
        simpan = a;
        a = b;
        b = simpan;
    }
    if(b > c){
        simpan = b;
        b = c;
        c = simpan;
    }
    if(a > b){
        simpan = a;
        a = b;
        b = simpan;
    }

    printf("%d %d %d", a, b, c);
    return 0;
}
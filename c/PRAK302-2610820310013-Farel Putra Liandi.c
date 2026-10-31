#include <stdio.h>

int main(){

    int nilai;
    char grade;
    scanf("%d", &nilai);

    if(nilai < 50){
        grade = 'E';
    }else if(nilai < 60){
        grade = 'D';
    }else if (nilai < 70){
        grade = 'C';
    }else if (nilai < 80){
        grade = 'B';
    }else{
        grade = 'A';
    }

    printf("%c", grade);
    return 0;
}
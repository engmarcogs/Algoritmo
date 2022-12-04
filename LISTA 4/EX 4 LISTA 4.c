#include<stdio.h>

int main () {
    int num = 1, multi = 0;

    printf("Os 5 primeiros Numero multiplos de 3 sao: \n");
    for (num; multi < 5; num++) {
        if (num % 3 == 0) {
            multi++;
            printf(" %d ",num);
        }
    }
}
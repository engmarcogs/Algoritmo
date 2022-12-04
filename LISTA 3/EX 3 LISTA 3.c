#include<stdio.h>

int main () {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);
    system("cls");

    if (num % 2 == 0) {
        printf(" %d e par.",num);
    } else {
        printf(" %d e impar",num);
    }
}
#include<stdio.h>

int main() {
    int num;

    printf("Digite um valor: ");
    scanf("%d", &num);

    if (num % 3 || num % 5) {
        printf("%d e divisivel por 3 ou 5", num);
        return 0;
    }
    else {
        printf("Nao e divisivel");
        return 0;
    }
}
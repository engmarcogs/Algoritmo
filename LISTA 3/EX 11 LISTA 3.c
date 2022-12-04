#include<stdio.h>

int main() {
    float valorX, valorY;

    printf("Digite o valor de X: ");
    scanf("%f", &valorX);
    system("cls");

    printf("Digite o valor de Y: ");
    scanf("%f", &valorY);
    system("cls");

    if (valorX > 0 && valorY > 0) {
        printf("Quadrante 1");
        return 0;
    }
    else if (valorX < 0 && valorY > 0) {
        printf("Quadrante 2");
        return 0;
    }
    else if (valorX < 0 && valorY < 0) {
        printf("Quadrante 3");
        return 0;
    }
    else if (valorX > 0 && valorY < 0) {
        printf("Quadrante 4");
        return 0;
    }
    else {
        printf("Origem");
        return 0;
    }
}
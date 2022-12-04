#include<stdio.h>

int main() {
    int a,b,c,d;

    printf("Digite o valor de A : ");
    scanf("%d",&a);
    system("cls");
    printf("Digite O valor de B : ");
    scanf("%d",&b);
    system("cls");
    printf("Digite o valor de C : ");
    scanf("%d",&c);
    system("cls");
    printf("Digite o valor de D : ");
    scanf("%d",&d);
    system("cls");
    if (b > c && d > a && (c + d) > (a + b) && c > 0 && d > 0 &&  a % 2 == 0) {
        printf("Valores aceitos! ");
    } else {
        printf("Valores nao aceitos!");
    }
}
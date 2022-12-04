#include<stdio.h>

int main() {
    float sal, prestacao;

    printf("Digite seu salario: ");
    scanf("%f", &sal);
    system("cls");
    printf("Digite o valor da prestacao: ");
    scanf("%f", &prestacao);
    system("cls");

    if (prestacao > sal*0.20) {
        printf("Emprestimo nao concedido !");
    } else {
        printf ("Emprestimo concedido !");
    }
}
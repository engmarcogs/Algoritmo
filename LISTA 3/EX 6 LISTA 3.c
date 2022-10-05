#include<stdio.h>

int main() {
    char sexo;
    float altura, masculino, feminino;

    printf("Qual seu sexo M ou F: ");
    scanf("%c", &sexo);
    
    printf("Qual sua altura: ");
    scanf("%f", &altura);

    if (sexo == 'M' || sexo == 'm') {
        masculino = (72.7 * altura) - 58;
        printf("O peso ideal masculino e %.2f", masculino);
    } else {
        feminino= (62.1 * altura) - 44.7;
        printf("O peso ideal feminino e %.2f", feminino);
    }
}
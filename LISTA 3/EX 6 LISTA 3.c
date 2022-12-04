#include<stdio.h>
#include<string.h>

    int main() {
    
    char sexo[1];
    float altura, resultM, resultF;

    printf("Qual e o seu sexo (M) ou (F) : ");
    scanf("%s", &sexo);
    system("cls");
    printf("Qual sua altura: ");
    scanf("%f", &altura);
    system("cls");
    

    if (sexo == 'M' || sexo == 'm') {
        resultM = (72.7 * altura) - 58;
        printf("O seu peso ideal e %.2f", resultM);
    } else {
        resultF = (62.1 * altura) - 44.7;
        printf("O seu peso ideal  e %.2f", resultF);
    }
}
#include<stdio.h>

int main () {
    float num1, num2 , num3, num4, media, prova, notafinal;

    printf("Digite as quatro notas do aluno: ");
    scanf("%f%f%f%f", &num1, &num2, &num3, &num4);

    media = (num1 * 2 + num2 * 3 + num3 * 4 + num4 * 1) / 10;

    printf("Media: %.1f\n", media);

    if (media >= 7.0) {
        printf("Aluno Aprovado.");
    }
        else if(media >= 5.0 && media <= 6.9) {
            printf("Aluno em exame\n");
            
            printf("Nota de exame: ");
            scanf("%.1f", &prova);

            notafinal = media + prova / 2;

            if (notafinal >= 5.0) {
                printf("Aluno Aprovado\n");
                printf("Media: %.1f", notafinal);
            } 
            else{
                printf("Aluno Reprovado\n");
                printf("Media: %.1f", notafinal);
            }
        } 
            else {
                printf("Aluno Reprovado");
            }
}
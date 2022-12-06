#include<stdio.h>

int main() {
    float num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, media;

    do
     {
        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);
        printf("Digite o terceiro numero: ");
        scanf("%f", &num3);
        printf("Digite o quarto numero: ");
        scanf("%f", &num4);
        printf("Digite o quinto numero: ");
        scanf("%f", &num5);
        printf("Digite o sexto numero: ");
        scanf("%f", &num6);
        printf("Digite o setimonumero: ");
        scanf("%f", &num7);
        printf("Digite o oitavo numero: ");
        scanf("%f", &num8);
        printf("Digite o nono numero: ");
        scanf("%f", &num9);
        printf("Digite o decimo numero: ");
        scanf("%f", &num10);

        media = (num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9 + num10) / 10;

        printf("Resultado: %.2f", media);
     } while (num1, num2, num3, num4, num5, num6, num7, num8, num9, num10 == 0 || num1, num2, num3, num4, num5, num6, num7, num8, num9, num10 < 0);   
}
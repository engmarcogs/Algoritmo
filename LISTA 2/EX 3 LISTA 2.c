#include<stdio.h>
#include<string.h>

int main (){
    int valor, bolean;
    float num1, num2;
    char letra[1], str[20];

    printf("Digite um numero inteiro: ");
    scanf("%d", &valor);
    
    printf("Digite dois numeros reais: ");
    scanf("%f%f", &num1, &num2);
    fflush(stdin);
    
    printf("Digite uma letra: ");
    scanf("%s", &letra);
    fflush(stdin);

    printf("Digite uma string: ");
    scanf("%s", str);
    fflush(stdin);
      
    printf("Digite 1 para verdadeiro e 0 para falso: ");
    scanf("%d", &bolean);
    fflush(stdin);

    printf("Numero Inteiro: %d\n", valor);
    printf("Numeros Reais: \n %f \n %f\n", num1, num2);
    printf("Letra: %s \n", letra);
    printf("String: %s\n", str);
    if (bolean == 1) {
        printf("Logico: Verdadeiro");
    } else {
        printf("Logico: Falso");
    }
}
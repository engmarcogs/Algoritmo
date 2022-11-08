#include<stdio.h>
    int main(){

       int operacao, num1, num2;

       printf("1- Soma: \n");
       printf("2- Subtrcao: \n");
       printf("3- Divisao: \n");
       printf("4- Multiplicacao: \n");
       scanf("%d", &operacao);

       printf("Digite o primeiro numero: ");
       scanf("%d", &num1);
    
        printf("Digite o segundo numero: ");
        scanf("%d", &num2);

        switch (operacao)
        {
        case 1:
            printf(num1 + num2);
        break;
        
        case 2:
            printf(num1 - num2);
        break;

        case 3:
            printf(num1 / num2);
        break;

        case 4:
            printf(num1 * num2);
        break;

        default:
            break;
        }
    
    }

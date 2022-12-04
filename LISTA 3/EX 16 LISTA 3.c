#include<stdio.h>
    int main (){
        int operacao,val1,val2,calculo;
        
        printf("Informe qual operacao sera realizada.\n");
        printf("1 - Soma \n");
        printf("2 - Subtracao \n");
        printf("3 - Divisao \n");
        printf("4 - Multiplicacao \n");
        scanf("%d",&operacao);
        system("cls");
        printf("Digite o primeiro valor : ");
        scanf("%d",&val1);
        printf("Digite o segundo valor : ");
        scanf("%d",&val2);

        switch (operacao)
        {
        case 1:
            calculo = val1 + val2;
            printf("O resultado da soma entre %d e %d e : %d",val1,val2,calculo);
            break;
        case 2:
            calculo = val1 - val2;
            printf("O resultado da subtracao entre %d e %d e : %d",val1,val2,calculo);
            break;
        case 3:
            calculo = val1 / val2;
            printf("O resultado da divisao entre %d e %d e : %d",val1,val2,calculo);
            break;
        case 4:
            calculo = val1 * val2;
            printf("O resultado da multiplicacao entre %d e %d e : %d",val1,val2,calculo);
            break;        
        default:
        printf("Operacao invalida!");
            break;
        }
    }
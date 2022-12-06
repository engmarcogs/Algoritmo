#include <stdio.h>
#include <stdlib.h>

int main(){
int i;
float soma;
int op = 1 ;
soma = 0;
            
while(op) {
    printf("Digite um numero qualquer ou 0 para terminar : ");
    scanf("%d", &op);
    printf("Numero digitado foi %d \n",op);
    soma=0;
    if (op) {
        
        for (i=1;i<=op;i++){
            soma += (1.0/i);  // 1.0 irÃ¡ forÃ§ar um cÃ¡lculo float
        };
            printf("O resultado da serie e : %f \n\n",soma);
        }
        else {
            printf("Usuario encerrou o programa! \n");
        }
    }
}
#include <stdio.h>
#include <stdlib.h>

int main(){
int i;
float soma;
int auxiliar = 1 ;
soma = 0;
            
while( auxiliar ) {
    printf("Digite um nÃºmero qualquer ou 0 para terminar");
    scanf("%d", &auxiliar);
    printf("UsuÃ¡rio digitou %d \n",auxiliar);
    soma=0;
    if (auxiliar) {
        
        for (i=1;i<=auxiliar;i++){
            soma += (1.0/i);  // 1.0 irÃ¡ forÃ§ar um cÃ¡lculo float
        };
            printf("O resultado da sÃ©rie Ã© %f \n\n",soma);
        }
        else {
            printf("entrada terminada pelo usuÃ¡rio \n");
        }
    }
}
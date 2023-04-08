#include<stdio.h>   
#include<stdlib.h>


    int main (){

        int n1, n2, quociente, resto;

        //ENTRADA DE DADOS!!!

        printf("DIGITE O PRIMEIRO VALOR:  ");
        scanf("%d", &n1);

        printf("DIGITE O SEGUNDO VALOR: ");
        scanf("%d", &n2);

        //PROCESSAMENTO DE DADOS!!!
            
                 quociente = (n1 / n2);
                 resto = (n1 % n2);  
                
                printf("O RESTO DA DIVISAO E: %d \n", resto);
                printf("RESULTADO DA DIVISAO E: %d\n ", quociente);

    }
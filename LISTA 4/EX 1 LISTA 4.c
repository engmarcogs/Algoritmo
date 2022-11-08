#include<stdio.h>
    int main (){

        int num,i;

            printf("Digite um numero natural: \n");
            scanf("%d",&num);
            printf("Os numeros naturais entre 0 e %d sao : \n",num);
        for (i = 0; i < num; i++)
        {   printf("%d ",i);
            
        }
        
        
    }
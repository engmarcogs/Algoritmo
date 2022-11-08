#include<stdio.h>
    int main(){
        int num,i;

        printf("Digite um numero inteiro :");
        scanf("%d",&num);
        printf("Os numeros impares entre 1 e %d sao:\n",num);
        for (size_t i = 1; i < num; i+=2)
        {   printf("%d ", i);
           
        }
        
    }
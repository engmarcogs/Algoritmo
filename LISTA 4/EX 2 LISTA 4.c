#include<stdio.h>
    int main(){
        int num,i;

        printf("Digite um numero :");
        scanf("%d",&num);

        for (size_t i = num - 1; i < num; i--)
        {   printf("%d ", i);
            
        }
        
    }
#include<stdio.h>
int main(){

 int num, i, resultado = 0;
 
 printf("Digite um numero : ");
 scanf("%d", &num);
 
 for (i = 1; i <= num; i++) {
    if (num % i == 0) {
       resultado++;
    }
 }
 
 if (resultado == 2)
    printf("%d e primo\n", num);
 else
    printf("%d nao e primo\n", num);
 

}
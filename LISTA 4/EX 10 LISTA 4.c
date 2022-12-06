#include <stdio.h>

int main(){

int num, a = 0;

float media = 0;

printf("Digite 10 numeros , inteiros positivos: \n");

for (int i = 1; i <= 10; i++){

printf(" %d - ", i);

scanf("%d", &num);

while(num<=0){

printf("Numero nao positivo. \n%d ", i);

scanf("%d", &num);

}

a = a+num;

}

media = a/10;

printf("\nmedia dos numeros e :%.2f", media);

return 0;

}
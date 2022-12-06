#include<stdio.h>
int main()
{
 int numero,maior,menor;
 int i;

 printf("Entre com o primeiro numero inteiro: ");
 scanf("%i", &numero);
 

 maior=numero;
 menor=numero;

 for(i=1; i<10; i++)
 { 
 printf("\n Digite  o %d numero : ",i+1);
 scanf("%i", &numero);
 

 if(numero>maior)
 maior=numero;
 else
 if(numero<menor)
 menor=numero;
 }


 printf("\nO menor numero  e: %d", menor);
 printf("\nO maior numero  e: %d", maior);

}
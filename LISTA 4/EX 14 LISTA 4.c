#include<stdio.h>
int main(){
	
	int contador = 0, num, maior = 0, menor = 1000, soma = 0;
    float media;
	
    printf("Digite um numero: ");
	scanf("%d", &num);
    system("cls");
    
	
	while (num > 0){
        
		if (num > maior)
			maior = num;
		if (num < menor)
			menor = num;

        soma += num;
        
        contador++;
        printf("Digite um numero: ");	
		scanf("%d", &num);
        system("cls");
	}

    media = soma/contador;
	
    printf("Maior: %d\n", maior);
	printf("Menor: %d\n", menor);
    printf("Media: %.2f\n", media);
		
}
#include<stdio.h>


	int main(){
		
		int qma, metros, qrolos, rolos = 50;
		
			
		printf("Digite a quatidade necessaria de mts para atender a obra:");
		scanf("%d", &metros);
		
		qrolos = (metros/ rolos);
		qma = (metros % 50);

			
		printf("quantidade de rolos necessaria: %i rolos\n", qrolos);
		
		printf("quantidade de mts avulsos: %i",qma);
	}

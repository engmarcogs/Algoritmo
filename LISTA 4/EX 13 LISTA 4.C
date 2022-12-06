#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num; 
	int sequencia = 1, seq1 = 0, seq3; 
	
	printf("Quantos termos da sequencia de Fibonacci deseja visualizar ? ");
	scanf("%d", &num);
	
	printf("\n0 ");
	num--;
	
	while (num) {
		printf("%d ", sequencia);
		seq3 = sequencia;
		sequencia += seq1;
		seq1 = seq3;
		num--;
	}	  
	
	return 0;
}
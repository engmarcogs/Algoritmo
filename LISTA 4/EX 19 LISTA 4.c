#include<stdio.h>
int main(){
	int num = -1;
	float soma = 0, i;
	for (i = 1.0; i <= 55.0; i++){
    	num += 2;
    	soma += (num / i);
	}
	printf("Valor de S e : %f", soma);	
}
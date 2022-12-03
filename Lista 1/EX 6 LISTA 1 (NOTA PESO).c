#include<stdio.h>


	int main(){
		
		float notaA, notaB, PESOA = 3.5, PESOB = 7.5, media;
		
		printf("Digite a sua primeira nota:");
		scanf("%f", &notaA);
		
		printf("Digite a sua segunda nota:");
		scanf("%f", &notaB);
		
		media = (notaA * PESOA) + (notaB * PESOB) / 11;

		if (media>10){
		printf("sua media e: 10");
	}else{
		printf("sua media e : %0.1f", media);
	}
}
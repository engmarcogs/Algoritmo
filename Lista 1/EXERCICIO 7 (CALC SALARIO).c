	int main(){
		
		char  sexo[2], matricula[8], nome[50];
		
		float horastrabalhadas, valorhora, salario;
		
		
		printf("Digite sue nome: ");
		scanf("%s", &nome);
		
		printf("Digite seu Sexo (F) ou (M): ");
		scanf("%s", &sexo);
		
		printf("Digite sua matricula: ");
		scanf("%s", &matricula);
		
		printf("Numero de horas trabalhadas: ");
		scanf("%f", &horastrabalhadas);
	
		printf("Valor da hora trabalhada: ");
		scanf("%f", &valorhora);
	
	
		salario = (valorhora * horastrabalhadas);
		
		printf("Seu nome e :\n %s \n", nome);
		printf("Voce e do sexo: \n%s\n", sexo);
		printf("Sua matricula e :\n %s\n", matricula);
		printf("Seu salario e: \n%0.1f \n", salario);
			
}

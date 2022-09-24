#include <stdio.h> // adicionar biblioteca padrão ao codigo fonte
int main(){ // tipo de dados inteiros
	float numero1,numero2; // declaração de variaveis // numeros reais
	float soma,subtracao,multiplicacao,divisao; // declaração de variaveis // numeros reais
	
		printf("*** NOME: Luiz Fernando de Moraes ***\n\n"); // dados de saida
		printf("*** UNIVERSIDADE: La Salle ***\n\n"); // dados de saida
		printf("*** MATRICULA: 202222519 ***\n\n"); // dados de saida
	
	printf("*** calculadora modelo 1 ***\n"); // dados de saida
	printf("digite o primeiro numero:  "); // dados de entrada
	scanf("%f",&numero1); // armazenando dados digitados na variavel 1
		
		printf("digite o segundo numero:  "); // dados de entrada
		scanf("%f",&numero2); // armazenando dados digitados na variavel 2
		
		soma=numero1+numero2;
		subtracao=numero1-numero2;
		multiplicacao=numero1*numero2;
		divisao=numero1/numero2;
		
		printf("Numero 1: %.2f\n",numero1);	
		printf("Numero 2: %.2f\n",numero2);
		printf("Soma: %.2f\n",soma);
		printf("subtracao entre numero 1 e numero 2:%.2f\n",subtracao);
		printf("Multiplicacao:%.2f\n",multiplicacao);
		printf("Divisao entre numero 1 e numero 2:%.2f\n",divisao);	
		
		// fontes: pagina 121 figura 5 do e-booK 
	
		return 0; // valor de retorno função man ZERO
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	




#include <stdio.h>
#include <stdlib.h>

//Estudo de condições compostas em C, calculo de IMC (Índice de Massa Corporal)

int main(int argc, char *argv[]) {
	
	float peso, altura, imc;
	
	printf("CALCULADORA DE IMC (Indice de Massa Corporal)\n");
	
	printf("\nDigite o peso: ");
	scanf("%f", &peso);
	
	printf("\nDigite a altura: ");
	scanf("%f", &altura);
	
	imc = peso/(altura*altura);
	
	printf("\nIMC: %f\n", imc);
	
	if(imc<17){
		
		printf("\nVoce esta muito abaixo do peso ideal.");
	
	}
	
	else if(imc>= 17 && imc<=18.49){
		
		printf("\nAbaixo do peso.");
		
	} 
	
	else if(imc>=18.50 && imc<=24.99){

		printf("\nParabens! voce esta no seu peso normal!");
			
	}
	
	else if(imc>=25 && imc<=29.99){

		printf("\nVoce esta acima de seu peso (sobrepeso)");
			
	}
		
	else if(imc>=30.0 && imc<=34.99){

		printf("\nObesidade grau I");
			
	}
	
	else if(imc>=35.0 && imc<=39.99){

		printf("Obesidade grau II");
			
	}
	
	else if(imc>=40.0){

		printf("Obesidade grau III");
		
		return 0;		
	}
}


#include <stdio.h>
#include <locale.h>

float CELparaFAH (float celsius);
float FAHparaCEL (float fah);

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int opcao;
	float tempC;
	float tempF;
	
	printf("\nConverter Temperatura - Celsius e Fahrenheit\n");
	
	printf("\nEscolha uma opção de temperatura: ");
	printf("\n1 - Celsius;\n2 - Fahrenheit\n");
	printf("\nOpção: ");
	scanf("%d", &opcao);
	
	if(opcao == 1) {
		printf("\nTemperatura em Celsius: ");
		scanf("%f", &tempC);
		tempF = CELparaFAH (tempC);
	} else {
		printf("\nTemperatura em Fahrenheit: ");
		scanf("%f", &tempF);
		tempC = FAHparaCEL (tempF);
	}
	
	printf("\nTemperatura em Celsius: %.2f C", tempC);
	printf("\nTemperatura em Fahrenheit: %.2f F", tempF);
	
	return 0;
}

float CELparaFAH (float celsius) {
	return (celsius * 9 / 5) + 32;
}

float FAHparaCEL (float fah) {
	return (fah - 32) * 5 / 9;
}

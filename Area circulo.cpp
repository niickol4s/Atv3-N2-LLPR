#include <stdio.h>
#include <locale.h>
#include <math.h>

#define pi 3.14

float areaCirculo (float raio);

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float area;
	float raio;
	
	printf("\nCalcular a �rea do c�rculo\n");
	
	printf("\nInsira o raio do c�rculo: ");
	scanf("%f", &raio);
	
	area = areaCirculo (raio);
	
	printf("\n�rea do c�rculo: %.2f", area);
	
	return 0;
}

float areaCirculo (float raio) {
	return pi * (pow(raio, 2));
}

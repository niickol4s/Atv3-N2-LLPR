#include <stdio.h>
#include <locale.h>
#include <math.h>

#define pi 3.14

float areaCirculo (float raio);

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float area;
	float raio;
	
	printf("\nCalcular a área do círculo\n");
	
	printf("\nInsira o raio do círculo: ");
	scanf("%f", &raio);
	
	area = areaCirculo (raio);
	
	printf("\nÁrea do círculo: %.2f", area);
	
	return 0;
}

float areaCirculo (float raio) {
	return pi * (pow(raio, 2));
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float operacao(float, float, float);
int main() {

	float v1 = 0.0, v2 = 0.0, v3= 0.0;

	printf("Digite o primeiro numero: ");
	scanf_s("%f", &v1);
	printf("Digite o segundo numero: ");
	scanf_s("%f", &v2);
	printf("Digite o terceiro numero: ");
	scanf_s("%f", &v3);
	printf("Os numeros digitados foram %.2f, %.2f e %.2f\n" , v1, v2,v3);
	printf("O resultado da operacao é: %.2f",operacao(v1,v2,v3));
	printf("\n\n");
	system("pause");

	return EXIT_SUCCESS;
}

float operacao(float val1, float val2, float val3) {
	return pow(val1,2) +val2 + val3;
}
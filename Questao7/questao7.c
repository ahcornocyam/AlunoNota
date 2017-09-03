#include <stdio.h>
#include <stdlib.h>

void popularMatriz(int[3][3]);
void mostrarMatriz(int[3][3]);
double calcularDeterminante(int[3][3]);
void matrizInversa(int[3][3], double);

int main() {

	int a[3][3];
	double det = 0;
	

	printf("Digite os elementos da matriz[3][3]: \n\n");
	popularMatriz(a);
	system("cls");

	printf("\nEsta foi a matriz digitada por voce: \n\n");
	mostrarMatriz(a);
	printf("\n\n");
	det = calcularDeterminante(a);

	if (det == 0) {
		printf("\nInversa nao existe\n");
		system("pause");
		return EXIT_FAILURE;
	}

	printf("\n\nDeterminante: %.5f\n\n", det);
	matrizInversa(a, det);
	system("pause");

	return EXIT_SUCCESS;
}

void popularMatriz(int matriz[3][3]) {
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("\nDigite o elemento [%d][%d]: ", i + 1, j + 1);
			scanf_s("%d", &matriz[i][j]);
		}
	}
}

void mostrarMatriz(int matriz[3][3]) {
	int i, y;
	for (i = 0; i < 3; i++)
	{
		for (y = 0; y < 3; y++)
		{
			printf("%d\t", matriz[i][y]);
		}
		printf("\n");
	}
}
void mostrarMatrizDouble(double matriz[3][3]) {
	int i, y;
	for (i = 0; i < 3; i++)
	{
		for (y = 0; y < 3; y++)
		{
			printf("%d\t", matriz[i][y]);
		}
		printf("\n");
	}
}

double calcularDeterminante(int matriz[3][3]) {	
	double det = 
		matriz[0][0] * (matriz[1][1] * matriz[2][2] - matriz[2][1] * matriz[1][2]) -
		matriz[0][1] * (matriz[1][0]* matriz[2][2] - matriz[1][2] * matriz[2][0]) +
		matriz[0][2] * (matriz[1][0] * matriz[2][1] - matriz[1][1] * matriz[2][0]);
	return det;
}

void matrizInversa(int matriz[3][3], double det) {
	double inv[3][3] = {0};
	double invDet = 1 / det;
	inv[0][0] = (matriz[1][1] * matriz[2][2] - matriz[2][1] * matriz[1][2]) * invDet;
	inv[0][1] = (matriz[0][2] * matriz[2][1] - matriz[0][1] * matriz[2][2]) * invDet;
	inv[0][2] = (matriz[0][1] * matriz[1][2] - matriz[0][2] * matriz[1][1]) * invDet;

	inv[1][0] = (matriz[1][2] * matriz[2][0] - matriz[1][0] * matriz[2][2]) * invDet;
	inv[1][1] = (matriz[0][0] * matriz[2][2] - matriz[0][2] * matriz[2][0]) * invDet;
	inv[1][2] = (matriz[1][0] * matriz[0][2] - matriz[0][0] * matriz[1][2]) * invDet;
	
	inv[2][0] = (matriz[1][0] * matriz[2][1] - matriz[2][0] * matriz[1][1]) * invDet;
	inv[2][1] = (matriz[2][0] * matriz[0][1] - matriz[0][0] * matriz[2][1]) * invDet;
	inv[2][2] = (matriz[0][0] * matriz[1][1] - matriz[1][0] * matriz[0][1]) * invDet;

	printf("\nO inverso desta matriz eh: \n\n");
	mostrarMatrizDouble(inv);
	printf("\n");
}
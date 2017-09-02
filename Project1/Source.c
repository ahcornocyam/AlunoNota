#include <stdio.h>
#include <stdlib.h>

void popularMatriz(int[3][3]);

void mostrarMatriz(int[3][3]);

void calculoProduto(int[3][3], int[3][3]);

int main() {

	int a[3][3]={ 0 }, b[3][3] = { 0 };	
	//primeira matriz
	printf("\nInforme os numeros da primeria matriz\n");
	popularMatriz(a);
	//sengunda matriz
	printf("\nInforme os numeros da segunda matriz\n");
	popularMatriz(b);	

	system("cls");
	
	//primeira matriz
	printf("\nNumeros da primeria matriz\n");
	mostrarMatriz(a);
	//segunda matriz
	printf("\nNumeros da segunda matriz\n");
	mostrarMatriz(b);

	calculoProduto(a, b);
	system("pause");
	return EXIT_SUCCESS;
}

void popularMatriz(int matriz[3][3]) {
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("\nDigite o elemento [%d][%d]: ", i+1, j+1);
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

//mostra na tela a diagonal
void mostrarDiagonal(int matriz[3][3]) {
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == j)
				printf("%d\t", matriz[i][j]);
			else
				printf("\t");
		}
		printf("\n");
	}

	
}

void calculoProduto(int matrizA[3][3], int matrizB[3][3]) {
	int i, j, k;
	int mult[3][3] = { 0 };

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			mult[i][j] = 0;
			for (k = 0; k < 3; k++)
			{
				mult[i][j] = mult[i][j] + matrizA[i][k] * matrizB[k][j];
			}
		}
	}
	printf("\n\nO produto entre as duas matrizes\n\n\n");
	mostrarMatriz(mult);
	printf("\nDiagonal do Produto\n");
	mostrarDiagonal(mult);
}
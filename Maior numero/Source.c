#include <stdio.h>
#include <stdlib.h>
#define QTD 20

enum boolean {
	true = 1, false = 0
};
typedef enum boolean bool;

int main() {
	int i = 0, maior = 0;
	int numeros[QTD];

	for (i = 0; i < QTD; i++)
	{
		bool valido;
		do {
			printf("\nInforme um numero maior que 10 e menor que 100: ");
			scanf_s("%d", &numeros[i]);

			valido = numeros[i] < 10 || numeros[i] > 100 ? false :  true;
			if (!valido)
				printf("\nEste numero nao e valido, escolha um que seja maior que 10 e menor que 100\n");
			getchar();
		} while (!valido);

		if (maior < numeros[i])
			maior = numeros[i];
		system("cls");
	}

	printf("\nO maior numero digitado foi %d: \n", maior);

	printf("\nOs numeros informados sao: ");

	for (i = 0; i < QTD; i++)
	{
		printf("%d ", numeros[i]);
	}
	printf("\n\n");
	
	system("pause");
	return EXIT_SUCCESS;
}
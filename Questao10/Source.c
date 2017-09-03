#include <stdio.h>
#include<stdlib.h>

enum boolean {
	true = 1, false = 0
};
typedef enum boolean bool;

int qtdOcorrencias(char*, char);

int main() {

	char frase[51] = { ' ' };
	char c;
	int ocorrencias = 0;

	printf("Digite a frase desejada: ");
	gets_s(frase, 50);
	printf("\nDigit	e o caracter que deseja procurar a quantidade: ");
	scanf_s("%c", &c);
	getchar();
	ocorrencias = qtdOcorrencias(frase, c);

	system("cls");

	printf("\nA frase digitada eh: %s\n", frase);
	printf("\nO caractere que deseja encontrar: %c\n", c);
	printf("\nNumero de ocorrencias deste caractere: %d\n", ocorrencias);	

	

	system("pause");

	return EXIT_SUCCESS;
}

int qtdOcorrencias(char *frase, char c) {
	int tam = strlen(frase);
	int numeroTotal = 0;

	for (int i = 0; i < tam; i++)
	{
		if (frase[i] == c)
			numeroTotal++;
	}
	return numeroTotal;
}
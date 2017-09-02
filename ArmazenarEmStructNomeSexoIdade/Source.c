#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QTD 5

struct pessoas {
	char nome[50];
	char sexo;
	int idade;
};

int main() {
	int i = 0;
	struct pessoas p[QTD];

	for (i = 0; i < QTD; i++) {		
		printf("\nNome: ");
		gets_s(&p[i].nome, 50);
		printf("\nIdade: ");
		scanf_s("%d", &p[i].idade);
		printf("\nSexo: ");
		scanf_s("%c", &p[i].sexo);
		getchar();
		system("cls");		
	}

	printf("\n\nPessoas Cadastradas");

	for (i = 0; i < QTD; i++)
	{
		printf("\nPessoa do indice %d\n\n", i);
		printf("\nNome: %s ", p[i].nome);
		printf("\nIdade: %d ", p[i].idade);
		printf("\nSexo: %c ", p[i].sexo);
		printf("\n\n\n");
	}

	system("pause");
	return EXIT_SUCCESS;
}

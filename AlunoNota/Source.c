#include <stdio.h>
#include <stdlib.h>


#define QTD 1
typedef struct aluno {
	char nome[51];
	float nota;
}aluno;

enum boolean {
	true = 1,  false = 0
};
typedef enum boolean bool;

aluno* cadastroAluno();
int main() {
	int i = 0;
	aluno dados[QTD]; 
	dados = cadastroAluno();

	FILE *arquivo;
	errno_t err;

	err = fopen_s(&arquivo, "alunos.txt", "w+");
	if (err == 0) {
		printf("\nO arquivo 'alunos.txt' está sendo criado. \n");
		for (i = 0; i < QTD; i++) {
			fprintf(arquivo, "%s;%.2f\n", dados[i].nome, dados[i].nota);
		}
	}
	else
	{
		printf("\nProblema ao criar o arquivo 'alunos.txt'\n");
	}

	if (arquivo) {
		err = fclose(arquivo);
		if (err == 0) {
			printf("\nO arquivo 'alunos.txt' foi salvo com sucesso!");
		}
		else
		{
			printf("\nProblemas ao fechar o arquivo 'alunos.txt'");
		}
	}

	printf("\n");
	system("pause");
	return EXIT_SUCCESS;
}

aluno* cadastroAluno() {
	int i = 0;
	aluno alunos[QTD];
	for (i = 0; i < QTD; i++)
	{
		printf("\nDigite o nome do aluno: ");
		gets_s(alunos[i].nome, 51);

		bool valido = false;
		do
		{
			printf("\nDigite a nota do aluno %s: ", alunos[i].nome);
			scanf_s("%f", &alunos[i].nota);
			if (alunos[i].nota <= 10)
				valido = true;
			else
				printf("\nA insira uma nota entre 0 e 10\n\n");
			getchar();
		} while (!valido);
		system("cls");
	}
	return alunos;
}
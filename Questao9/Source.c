#include <stdio.h>
#include<stdlib.h>

enum boolean {
	true = 1, false = 0
};
typedef enum boolean bool;

bool eUmaVogal(char);
int qtdVogais(char*);
double percentual(int, int);


int main() {

	char frase[21] = { ' ' };
	int i = 0, comprimento = 0, vogais = 0;

	printf("Digite a frase desejada: ");
	gets_s(frase, 20);	
	comprimento = strlen(frase);
	vogais = qtdVogais(frase);

	system("cls");

	printf("\nA frase digitada foi: %s\n", frase);
	printf("\nQuantidade de vogais: %d\n",vogais );
	printf("\nO percentual de vogais na frase: %.2f\n", percentual(vogais,comprimento));

	system("pause");

	return EXIT_SUCCESS;
}

int qtdVogais(char *frase) {
	int tam = strlen(frase), numeroTotal= 0;
	
	for (int i = 0; i < tam; i++)
	{
		if (eUmaVogal(frase[i]))
			numeroTotal++;
	}
	return numeroTotal;
}

double percentual(int cont, int total) {	
	return (cont * 100) / total;
}


bool eUmaVogal(char v) {
	return (v == 'a' || v == 'A' || v == 'e' || v == 'E' || v == 'i' || v == 'I' || v == 'o' || v == 'O'
		|| v == 'u' || v == 'U');
} 
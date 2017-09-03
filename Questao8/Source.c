#include <stdio.h>
#include<stdlib.h>

enum boolean {
	true = 1, false = 0
};
typedef enum boolean bool;

bool eUmaVogal(char);
char* inverterFrase(char[21]);

int main() {

	char frase[21] = { ' ' };
	int i = 0;

	printf("Digite a frese desejada: ");
	gets_s(frase, 20);

	system("cls");

	printf("\nA frase digitada foi: %s\n", frase);
	

	printf("\nA frase invertida e substituindo as vogais por @ eh: %s\n", inverterFrase(frase));

	system("pause");

	return EXIT_SUCCESS;
}

char* inverterFrase(char frase[21]) {
	int i =0;
	
	for (i = 20; i >= 0; i--)
	{
		if (eUmaVogal(frase[i]))
			frase[i] = '@';
		
	}
	return frase;
}

bool eUmaVogal(char v) {
	return (v == 'a' || v == 'A' || v == 'e' || v == 'E' || v == 'i' || v == 'I' || v == 'o' || v == 'O'
		|| v == 'u' || v == 'U');
}
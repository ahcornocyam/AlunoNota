#include <stdio.h>
#include <stdlib.h>

enum boolean {
	true = 1, false = 0
};
typedef enum boolean bool;

bool eUmaVogal(char);

int main() {

	int i = 0, cont = 0;

	char vogal[5], consoante[5], frase[21] = { ' ' };

	printf("Digite uma frase ");
	gets_s(frase, 21);

	for (i = 0; i < 20; i++)
	{
		if (eUmaVogal(frase[i]) && cont <= 4) {
			vogal[cont] = frase[i];
			cont++;
		}
	}

	cont = 0;

	for ( i = 0; i < 20; i++)
	{
		if (!eUmaVogal(frase[i]) && frase[i] != '\0' && frase[i] != '\n' && frase[i] != ' ') 
		{
			consoante[cont] = frase[i];
			cont++;
		}
	}

	printf(" a frase digitada foi: %s\n", frase);
	printf("As cinco primeiras vogais digitadas foram: ");
	for (i = 0; i < 5; i++)
	{
		if (vogal[i] != NULL)
			printf("%c", vogal[i]);
	}
	printf("\nAs cinco ultimas consoantes foram: ");
	for (i = 0; i < 5; i++) {
		if (consoante[i] != NULL)
			printf("%c", consoante[i]);
	}
	printf("\n");
	system("pause");

	return 0;
}

bool eUmaVogal(char v) {
	return (v == 'a' || v == 'A' || v == 'e' || v == 'E' || v == 'i' || v == 'I' || v == 'o' || v == 'O'
		|| v == 'u' || v == 'U');		
}
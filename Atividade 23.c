#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>


int main() {
	setlocale(LC_ALL, "Portuguese");
	
	srand(time(NULL));
	
	int tentativa, numero = 0;
	numero = rand() % 101;
	
	printf("JOGO DE ADIVINHAÇÃO!\n");
	printf("\n");

	while (tentativa != numero) {
		
		printf("Digite um numero: ");
		scanf("%d",&tentativa);
		
		if (tentativa > numero ) {
			printf("Muito alto\n");
		}
		else if (tentativa < numero) {
			printf("Muito Baixa\n");
		}
		else {
			printf("Você acertou!!!\n");
		}
	}	
		
	system("PAUSE");
	return 0;
	
}

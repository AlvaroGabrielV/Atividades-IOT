//Atividade 22

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

		int main() {
				setlocale(LC_ALL, "Portuguese");
				
				int vetor[]= {31, 2, 43, 40, 12, 20, 50};
				int chave, resultado = -1, i, contador;
				
			for (contador = 0; contador < 7; contador++){
				printf("%i ", vetor[contador]);
			}
			printf("\n Qual número deseja encotrar: ");
			scanf("%d", &chave);
			for (i = 0; i < chave; i++){
			if (vetor[i] == chave) {
			resultado = i;
		}	}
			
			if (resultado != -1)
				printf("\nO vetor possui esse número na posição %d", resultado);
			else 
				printf("\nO vetor não possui esse número");
			
			return 0;}
			

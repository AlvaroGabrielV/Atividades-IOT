//Atividade 29

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

	int main() {
		setlocale(LC_ALL, "Portuguese");
	
		char palavra[30];
		int quant, vogais = 0, i;
		
		printf("Digite uma palavra: ");
		scanf("%s", &palavra);
		
		quant= strlen(palavra);
		
		for(i = 0; i <=quant; i++){
			switch(palavra[i]){
				case 'A':
				case 'a':
				case 'E':
				case 'e':
				case 'I':
				case 'i':
				case 'O':
				case 'o':
				case 'U':
				case 'u':
					vogais++;
						break;
			}
	}	
		printf("A quantidade de vogais na palavra é de %d", vogais);
			
	return 0;	
  }

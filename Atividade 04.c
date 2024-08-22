#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	int  numero1, numero2;
	
	printf("Informe um numero: ");
	scanf("%i",&numero1);
	printf("Informe outro numero: ");
	scanf("%i",&numero2);
	
	if(numero1 > numero2) {
		printf("\nO numero %i é maior que %i \n", numero1, numero2);	
	}
	else {
		printf("\nO numero %i é maior que %i \n", numero2, numero1);
	}
	system("pause");
	return 0;
}

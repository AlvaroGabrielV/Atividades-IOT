#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	int  numero1;
	
	printf("Informe um numero: ");
	scanf("%i",&numero1);
	
	if(numero1 % 2 == 0) {
		printf("\nO numero %i é par!\n", numero1);	
	}
	else {
		printf("\nO numero %i é impar\n", numero1);
	}
	system("pause");
	return 0;
}

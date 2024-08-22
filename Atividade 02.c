d#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	int  numero1, numero2;
	
	printf("Informe um numero: ");
	scanf("%i",&numero1);
	printf("Informe outro numero: ");
	scanf("%i",&numero2);
	
	float soma = numero1 + numero2;
	
	printf("\nA soma dos numeros é: %.2f \n", soma);
	system("pause");
	return 0;
}

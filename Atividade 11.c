#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
int main() {
 setlocale(LC_ALL, "portuguese");
 int numero, contador, resultado = 0;
 
 printf("Digite um número: ");
 scanf("%d", &numero);
 
 for (contador = 2; contador <= numero / 2; contador++) {
    if (numero % contador == 0) {
       resultado++;
    }
 }
 
 if (resultado == 0)
    printf("\n %d é um número primo\n", numero);
 else
    printf("\n %d não é um número primo\n", numero);
    printf("\n");
 
 system("PAUSE");
 return 0;
}

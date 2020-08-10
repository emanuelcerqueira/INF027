/*46 - Escreva um programa que calcule o quociente da divisão de A por B (número inteiros e
positivos), ou seja, A / B, através de subtrações sucessivas. Esses dois valores são
passados pelo usuário através do teclado.
*/
#include <stdio.h>
int main(){	
	
	int dividendo, aux, divisor, quociente = 0;
	
	printf("DIVIDENDO:\n");
	scanf("%d", &dividendo);

	printf("DIVISOR:\n");
	scanf("%d", &divisor);

	aux = dividendo;

	while ((aux - divisor) > 0) {
		aux -= divisor;
		quociente++;
	}

	printf("A DIVISAO INTEIRA DE %d POR %d EH IGUAL A %d", dividendo, divisor, quociente);



	return 0;
}
/*
Questão I - 
Uma das maneiras de conseguir a raiz quadrada de um número é subtrair do número os ímpares consecutivos a partir
de 1, até que o resultado da subtração seja menor ou igual a zero. O número de vezes que se conseguir fazer esta
subtração é a raiz quadrada exata (quando o resultado da última subtração é 0) ou aproximada do número (quando o
resultado da última subtração é negativo).
Ex,.: Raiz de 16: 16­1 => 15­3 => 12­5 => 7­7 = 0 Logo, a raiz de 16 é 4.
Raiz de 27: 27 – 1 => 26 – 3 => 23 – 5 => 18 – 7 => 11 – 9 => 2 – 11 = ­ 9. Logo, a raiz de 27 é 6.
Escreva em C um algoritmo que use esta técnica para calcular a raiz quadrada (exata ou aproximada) de um número
inteiro
*/

#include <stdio.h>
int main(){
	
	int i;
	int numero;
	int aux;
	int raizQuadrada = 0;

	printf("NUMERO:\n");
	scanf("%d", &numero);

	aux = numero;

	for (i = 1; aux > 0; i++) {
		if (i % 2 != 0) {
			aux -= i;
			raizQuadrada++;
		}
	}

	printf("RAIZ QUADRADA (EXATA OU APROXIMADA) DE %d EH IGUAL A %d", numero, raizQuadrada);
	
	return 0;
}
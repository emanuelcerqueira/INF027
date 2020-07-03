/*16. Escreva um programa para gerar o invertido de um número com três algarismos
(exemplo: o invertido de 498 é 894).
*/

#include <stdio.h>
int main(){	
	int numero, numeroInvertido = 0;
	
	printf("NUMERO DE TRES ALGARISMOS:\n");
	scanf("%d", &numero);	
	
	numeroInvertido += numero / 100;
	numeroInvertido += numero % 100 / 10 * 10;
	numeroInvertido += numero % 100 % 10 * 100;
	
	printf("NUMERO INVERTIDO: %d", numeroInvertido);
	
	return 0;
}
/*69. Escreva um programa que leia um vetor de 15 posições de inteiros. Em seguida, o
programa deve ler um valor inteiro e imprimir o número de vezes que este valor ocorre
no vetor.
*/

#include <stdio.h>
int main(){	
	
	int i;	
	int vetor[15];
	int valor;
	int numeroVezesValorEstaPresenteNoVetor = 0;

	printf("15 NUMEROS INTEIROS PARA O VETOR:\n");
	for (i = 0; i < 15; i++)
		scanf("%d", &vetor[i]);

	printf("VALOR:\n");
	scanf("%d", &valor);

	
	for (i = 0; i < 15; i++)	
		if (vetor[i] == valor)
			numeroVezesValorEstaPresenteNoVetor++;

	printf("O VALOR %d ESTA PRESENTE NO VETOR %d VEZES\n",valor, numeroVezesValorEstaPresenteNoVetor);	

	return 0;
}
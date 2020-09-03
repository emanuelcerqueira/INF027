/*
Questão I -
Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce
3 centímetros por ano. Construa um programa em C que calcule e imprima quantos anos
serão necessários para que Zé seja maior que Chico.
*/

#include <stdio.h>
int main(){
	
	int alturaChico = 150;
	int alturaZe = 110;
	int qtdAnos;

	for (qtdAnos = 0; alturaZe <= alturaChico; qtdAnos++) {
		alturaChico += 2;
		alturaZe += 3;
	}

	printf("SERAO NECESSARIOS %d ANOS PARA QUE ZE SEJA MAIOR QUE CHICO", qtdAnos);

	return 0;
}
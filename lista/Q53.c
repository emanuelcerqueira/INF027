/*53 - Dado um país A, com 5.000.000 de habitantes e uma taxa de natalidade de 3% ao ano, e
um país B com 7.000.000 de habitantes e uma taxa de natalidade de 2% ao ano, escreva
um programa, que imprima o tempo necessário para que a população do país A ultrapasse
a população do país B.
*/

#include <stdio.h>
int main(){	
	
	int popA;
	int popB;
	int qtdAnos = 0;

	for(popA = 5000000, popB = 7000000; popB > popA; qtdAnos++) {
		popA *= 1.03;
		popB *= 1.02;
	}

	printf("%d ANOS PARA ATE QUE A POPULACAO A ULTRAPASSE A POPULACAO B", qtdAnos);
	
	return 0;
}
/*13. Um circuito elétrico é composto de duas resistências R1 e R2 em paralelo, e ambas em
sequência de uma resistência R3. Faça um algoritmo para calcular a resistência
equivalente desse circuito.
*/

#include <stdio.h>
int main(){	
	float r1, r2, r3, rEquivalente;
	
	printf("R1, R2 e R3:\n");
	scanf("%f %f %f", &r1, &r2, &r3);
	
	rEquivalente = 1 / ((1 / r1) + (1 / r2)) + r3;
	
	printf("RESISTENCIA EQUIVALENTE: %.2f", rEquivalente);

	return 0;
}
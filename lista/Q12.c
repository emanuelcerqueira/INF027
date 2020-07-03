/*12. Faça um algoritmo que transforme uma velocidade fornecida em m/s pelo usuário para
Km/h. Para tal, multiplique o valor em m/s por 3,6.
*/

#include <stdio.h>
int main(){	
	float velocidadems, velocidadekmh;

	printf("VELOCIDADE EM m/s:\n");
	scanf("%f", &velocidadems);

	velocidadekmh = velocidadems * 3.6;

	printf("VELOCIDADE EM km/h: %.2f", velocidadekmh);
	
	return 0;
}
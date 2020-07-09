/*31. Escreva um programa, que leia o número de passes tentados, o número de passes
completos, o número de jardas passadas, o número de passes para touchdown e o número
de passes interceptados e informe o QB Rating do quarterback.

Referência:
https://en.wikipedia.org/wiki/Passer_rating
*/

#include <stdio.h>
int main(){	
	
	float att, comp, yds, td, inte;
	float a, b, c, d, qbRating;

	printf("NUMERO DE PASSES TENTADOS:\n");
	scanf("%f", &att);

	printf("NUMERO DE PASSES COMPLETOS:\n");
	scanf("%f", &comp);

	printf("NUMERO DE JARDAS PASSADAS:\n");
	scanf("%f", &yds);

	printf("NUMERO DE PASSES PARA TOUCHDOWN:\n");
	scanf("%f", &td);

	printf("NUMERO DE PASSES INTERCEPTADOS:\n");
	scanf("%f", &inte);
	
	a = ((comp / att) - 0.3) * 5;
	b = ((yds / att) - 3) * 0.25;
	c = (td / att) * 20;
	d = 2.375 - (inte / att * 25);

	if (a < 0)
		a = 0;
	else if (a > 2.375)
		a = 2.375;

	if (b < 0)
		b = 0;
	else if (b > 2.375)
		b = 2.375;

	if (c < 0)
		c = 0;
	else if (c > 2.375)
		c = 2.375;

	if (d < 0)
		d = 0;
	else if (d > 2.375)
		d = 2.375;

	qbRating = ((a + b + c + d) / 6) * 100;

	printf("QB RATING DO QUARTERBACK: %.2f", qbRating);
		
	
	return 0;
}
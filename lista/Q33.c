/*33. Escreva um algoritmo que leia 2 valores (x e y), que devem representar as coordenadas
de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o
ponto, ou se está sobre um dos eixos cartesianos ou na origem (x=y=0).
*/

#include <stdio.h>
int main(){	
	
	float x, y;

	printf("X:\n");
	scanf("%f", &x);

	printf("Y:\n");
	scanf("%f", &y);
	
	
	if (x == 0 && y == 0)
		printf("(%.2f, %.2f) ORIGEM", x, y);
	else if (x == 0)
		printf("(%.2f, %.2f) EIXO DAS ORDENADAS", x, y);
	else if (y == 0)
		printf("(%.2f, %.2f) EIXO DAS ABCISSAS", x, y);
	else if (x > 0 && y > 0)
		printf("(%.2f, %.2f) PRIMEIRO QUADRANTE", x, y);
	else if (x < 0 && y > 0)
		printf("(%.2f, %.2f) SEGUNDO QUADRANTE", x, y);
	else if (x < 0 && y < 0)
		printf("(%.2f, %.2f) TERCEIRO QUADRANTE", x, y);
	else if (x > 0 && y < 0)
		printf("(%.2f, %.2f) QUARTO QUADRANTE", x, y);
	
	return 0;
}
//19. Escreva um programa que calcule a raiz de uma equação do primeiro grau

#include <stdio.h>
int main(){	
	float a, b, raiz;
	
	printf("a:\n");
	scanf("%f", &a);

	printf("b:\n");
	scanf("%f", &b);

	raiz = -b / a;

	printf("RAIZ: %.2f", raiz);

	return 0;
}
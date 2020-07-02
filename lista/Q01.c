//1. Dado o tamanho da base e da altura de um retângulo, calcular a sua área e o seu perímetro.

#include <stdio.h>
int main(){
	int base, altura, area, perimetro;
	
	printf("BASE: \n");
	scanf("%d", &base);
	
	printf("ALTURA: \n");
	scanf("%d", &altura);
	
	area = base * altura;
	perimetro = base*2 + altura*2;

	printf("AREA: %d", area);
	printf("\nPERIMETRO: %d", perimetro);
	
	return 0;
}
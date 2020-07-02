//4. Dado os três lados de um triângulo determinar o perímetro do mesmo.

#include <stdio.h>
int main(){
	float lado1, lado2, lado3, perimetro;

	printf("LADO 1: \n");
	scanf("%f", &lado1);

	printf("LADO 2: \n");
	scanf("%f", &lado2);

	printf("LADO 3: \n");
	scanf("%f", &lado3);
	
	perimetro = lado1 + lado2 + lado3;

	printf("PERIMETRO: %.2f ", perimetro);
			
	return 0;
}
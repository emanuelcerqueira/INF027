//2. Dado o tamanho do lado de um quadrado, calcular a área e o perímetro do mesmo

#include <stdio.h>
int main(){
	int lado, area, perimetro;

	printf("LADO: \n");
	scanf("%d", &lado);
	
	area = lado * lado;
	perimetro = lado * 4;

	printf("AREA: %d ", area);
	printf("\nPERIMETRO: %d ", perimetro);
			
	return 0;
}
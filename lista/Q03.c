//3. Dado o tamanho do raio de uma circunferência, calcular a área e o perímetro da mesma.

#include <stdio.h>
int main(){
	float raio, area, perimetro;
	float pi = 3.14159;	

	printf("RAIO: \n");
	scanf("%f", &raio);

	area = pi * raio * raio;
	perimetro = 2 * pi * raio;

	printf("AREA %.2f", area);
	printf("\nPERIMETRO %.2f", perimetro);
			
	return 0;
}
//6. Ler dois números inteiros e exibir o quociente e o resto da divisão inteira entre eles

#include <stdio.h>
int main(){
	int dividendo, divisor, quociente, resto;

	printf("DIVIDENDO: \n");
	scanf("%d", &dividendo);

	printf("DIVISOR: \n");
	scanf("%d", &divisor);

	quociente = dividendo / divisor;
	resto = dividendo % divisor;

	printf("QUOCIENTE %d", quociente);
	printf("\nRESTO %d", resto);
			
	return 0;
}
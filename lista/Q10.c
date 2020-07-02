//10. Converter um inteiro informado menor que 32 para sua representação em binário

#include <stdio.h>
int main(){	
	int inteiro;
	int binario = 0;
	
	printf("INTEIRO: \n");
	scanf("%d", &inteiro);
	
	binario += inteiro % 2;
	binario += (inteiro / 2)  % 2 * 10;
	binario += (inteiro / 4)  % 2 * 100;
	binario += (inteiro / 8)  % 2 * 1000;
	binario += (inteiro / 16) % 2 * 10000;

	printf("BINARIO: %d", binario);
				
	return 0;
}
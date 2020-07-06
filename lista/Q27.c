/*27. Escreva um programa que leia 3 números e calcule a média ponderada entre eles.
Considere que o maior número recebe peso 5 e os outros dois recebem peso 2,5.*/


#include <stdio.h>
int main(){	
	float numero1, numero2, numero3, mediaPonderada;

	printf("NUMEROS 1, 2 e 3:\n");
	scanf("%f %f %f", &numero1, &numero2, &numero3);	
	
	if (numero1 > numero2 && numero1 > numero3)
		mediaPonderada = (numero1 * 5 + numero2 * 2.5 + numero3 * 2.5) / 10.0;
	else if (numero2 > numero1 && numero2 > numero3)
		mediaPonderada = (numero1 * 2.5 + numero2 * 5 + numero3 * 2.5) / 10.0;
	else if (numero3 > numero2 && numero3 > numero1)
		mediaPonderada = (numero1 * 2.5 + numero2 * 2.5 + numero3 * 5) / 10.0;
	
	printf("MEDIA PONDERADA: %.2f", mediaPonderada);
	
	return 0;
}
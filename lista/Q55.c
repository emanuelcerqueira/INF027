/*55 - Dizemos que dois números são amigos se cada um deles é igual a soma dos divisores
próprios do outro. Os divisores próprios de um número positivo N são todos os divisores
inteiros positivos de N exceto o próprio N. Um exemplo de números amigos são 284 e
220, pois os divisores próprios de 220 são 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 e 110.
Efetuando a soma destes números obtemos o resultado 284 (1 + 2 + 4 + 5 + 10 + 11 + 20
+ 22 + 44 + 55 + 110 = 284). Os divisores próprios de 284 são 1, 2, 4, 71 e 142,
efetuando a soma destes números obtemos o resultado 220 (1 + 2 + 4 + 71 + 142 = 220).
Escreva um programa que dado dois inteiros, verifique se eles são amigos. (17296 e
18416 são amigos, por exemplo).
*/

#include <stdio.h>
int main(){	
	
	int numero1, numero2, somaDivisores1 = 0, somaDivisores2 = 0;

	printf("DOIS NUMEROS INTEIROS:\n");
	scanf("%d %d", &numero1, &numero2);


	for (int i = 1; i <= (numero1 / 2); i++)
		if (numero1 % i == 0)
			somaDivisores1 += i;

	for (int i = 1; i <= (numero2 / 2); i++)
		if (numero2 % i == 0)
			somaDivisores2 += i;
			

	if (numero1 == somaDivisores2 && numero2 == somaDivisores1)
		printf("%d e %d sao numeros amigos", numero1, numero2);
	else
		printf("%d e %d NAO sao numeros amigos", numero1, numero2);
	
	
	return 0;
}
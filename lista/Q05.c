//5. Ler um número inteiro e exibir o seu sucessor

#include <stdio.h>
int main(){
	int numero, sucessor;

	printf("NUMERO: \n");
	scanf("%d", &numero);

	sucessor = numero + 1;

	printf("SUCESSOR %d", sucessor);
			
	return 0;
}
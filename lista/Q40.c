/*40 - Escreva um programa que receba um numero inteiro de 1 a 100 e mostre na tela o
numero por extenso.
*/

#include <stdio.h>
int main(){	

	int numero, dezena, unidade;

	printf("NUMERO INTEIRO DE 1 a 100:\n");
	scanf("%d", &numero);

	if (numero == 100) {
		printf("cem");
	}	
	else if (numero >= 11 && numero <= 19) {
		switch(numero) {
			case 11:
				printf("onze");
				break; 

			case 12:
				printf("doze");
				break; 

			case 13:
				printf("treze");
				break; 

			case 14:
				printf("quartoze");
				break; 

			case 15:
				printf("quinze");
				break; 

			case 16:
				printf("dezesseis");
				break; 

			case 17:
				printf("dezessete");
				break; 

			case 18:
				printf("dezoito");
				break; 

			case 19:
				printf("dezenove");
				break; 


		}	
	}
	else {
		dezena = numero / 10;	
		unidade = numero % 10;

		switch(dezena) {
			case 1:
				printf("dez");
				break;		

			case 2:
				printf("vinte");
				break;		

			case 3:
				printf("trinta");
				break;
			
			case 4:
				printf("quarenta");
				break;

			case 5:
				printf("cinquenta");
				break;

			case 6:
				printf("sessenta");
				break;

			case 7:
				printf("setenta");
				break;

			case 8:
				printf("oitenta");
				break;

			case 9:
				printf("noventa");
				break;

		}
		if (dezena != 0)
			printf(" e ");

		switch(unidade) {
			case 1:
				printf("um");
				break;		

			case 2:
				printf("dois");
				break;		

			case 3:
				printf("tres");
				break;		

			case 4:
				printf("quatro");
				break;	

			case 5:
				printf("cinco");
				break;		

			case 6:
				printf("seis");
				break;		

			case 7:
				printf("sete");
				break;		

			case 8:
				printf("oito");
				break;		

			case 9:
				printf("nove");
				break;		

		}

	}

	return 0;
}
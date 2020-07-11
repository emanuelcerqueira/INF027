/*
Questão IV
Escreva um algoritmo em linguagem C que leia dois valores numéricos, representando
um dia e um mês e escreva a data equivalente por extenso. Por exemplo, se os números
informados forem 02 e 06, a saída deverá ser ‘dois de junho’; caso a data informada seja
01 e 12, a saída deverá ser ‘primeiro de dezembro’. 
*/

#include <stdio.h>
int main(){
	int dia, mes, dezena, unidade;
	
	printf("VALORES NUMERICOS DE DIA E MES:\n");
	scanf("%d %d", &dia, &mes);

	if (dia == 1) {
		printf("primeiro");
	}
	else if (dia >= 11 && dia <= 19) {
		switch(dia) {
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
		dezena = dia / 10;	
		unidade = dia % 10;
	
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

	printf(" de ");

	switch(mes) {
		case 1:
			printf("janeiro");
			break;		

		case 2:
			printf("fevereiro");
			break;		

		case 3:
			printf("março");
			break;		

		case 4:
			printf("abril");
			break;	

		case 5:
			printf("maio");
			break;		

		case 6:
			printf("junho");
			break;		

		case 7:
			printf("julho");
			break;		

		case 8:
			printf("agosto");
			break;		

		case 9:
			printf("setembro");
			break;

		case 10:
			printf("outubro");
			break;	

		case 11:
			printf("novembro");
			break;		

		case 12:
			printf("dezembro");
			break;		

	}


	return 0;
}
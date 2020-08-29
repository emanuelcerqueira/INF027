/*68 - Escreva um programa que leia o índice pluviométrico de cada dia do mês de junho e
informe o dia que mais choveu, o dia que menos choveu e as médias pluviométricas de
cada uma das duas quinzenas.
*/

#include <stdio.h>
int main(){	
	
	
	int i;
	float maiorQtdChuva;
	float menorQtdChuva;
	int diaQueMaisChoveu = 0;
	int diaQueMenosChoveu = 0;
	float mediaPrimeiraQuizena = 0;
	float mediaSegundaQuizena = 0;
	float indice[30];

	for (i = 0; i < 30; i++) {
		printf("INFORME O INDICE PLUVIOMETRICO DO DIA %d de JUNHO:\n", i+1);
		scanf("%f", &indice[i]);
	
		if (i < 15)
			mediaPrimeiraQuizena += indice[i];
		else
			mediaSegundaQuizena += indice[i];
	}

	maiorQtdChuva = indice[0];
	menorQtdChuva = indice[0];
	diaQueMenosChoveu = 1;
	diaQueMaisChoveu = 1;
	

	for (i = 1; i < 30; i++) {
		if (indice[i] > maiorQtdChuva) {
			maiorQtdChuva = indice[i];
			diaQueMaisChoveu = i+1;
		}
		
		if (indice[i] < menorQtdChuva) {
			menorQtdChuva = indice[i];
			diaQueMenosChoveu = i+1;
		}
	}

	mediaPrimeiraQuizena /= 15;
	mediaSegundaQuizena /= 15;

	printf("DIA QUE MAIS CHOVEU %d\n", diaQueMaisChoveu);
	printf("DIA QUE MENOS CHOVEU %d\n", diaQueMenosChoveu);
	printf("MEDIA PLUVIOMETRICA DA PRIMEIRA QUIZENA %.3f\n", mediaPrimeiraQuizena);
	printf("MEDIA PLUVIOMETRICA DA SEGUNDA QUIZENA %.3f\n", mediaSegundaQuizena);
	

	return 0;
}
/*
Questao II -

Uma pesquisa genética sobre populações de repteis extintos na Ilha de Soforuei, busca verificar se indi -
víduos fossilizados são da mesma família. Indivíduos são considerados da mesma família se partilham de uma
parte idêntica e contígua de código genético de no mínimo P% do tamanho da menor fita genética dentre os indi -
víduos.
Por exemplo, um indivíduo A possui o código genético GATTACTGAGTCA e o indivíduo B possui o código
genético CATACAGT. Se aplicarmos um critério de parentesco de 62%, os indivíduos A e B devem ser
considerados parentes, pois a fita AGTCA é uma parte contígua da sequência dos dois indivíduos e possui
comprimento de tamanho 5, onde 5 >= 8 * 62%. Observe, que a menor das sequências é a de tamanho 8 do
indivíduo B. Observe que as fitas são avaliadas em cadeias circulares (seguindo o último elemento da cadeia,
está o primeiro).
Escreva um programa em C que leia as duas cadeias (o tamanho máximo da cadeia é 512) e o valor de P e indi -
que se os indivíduos são parentes
*/

#include <stdio.h>

//"o tamanho máximo da cadeia é 512", está 513 por causa do caractere \0 que indica o final de uma string
#define MAX_SIZE_CADEIA 513
#define MAX_SIZE_CADEIA_CIRCULAR 1025
#define FALSO 0
#define VERDADEIRO 1
int main(){	

	int aux;
	int i;
	int j;
	int k;
	int l;
	int m;
	int tamanhoMenorCodigo;
	int tamanhoMaiorSubString = 0;
	char a[MAX_SIZE_CADEIA];
	char b[MAX_SIZE_CADEIA];
	char aCircular[MAX_SIZE_CADEIA_CIRCULAR];
	char bCircular[MAX_SIZE_CADEIA_CIRCULAR];
	char substring[MAX_SIZE_CADEIA_CIRCULAR];
	int tamanhoA;
	int tamanhoB;
	int tamanhoCircularA;
	int tamanhoCircularB;
	int substringEstaContida;
	int substringCont;
	float p;
	float pPorCento;

	puts("COD. GENETICO DO INDIVIDUO A:");
	gets(a);

	puts("COD. GENETICO DO INDIVIDUO B:");
	gets(b);

	printf("VALOR DA PORCETAGEM (DE 0 A 100):\n");
	scanf("%f", &p);

	pPorCento = p / 100;

	for (tamanhoA = 0; a[tamanhoA] != '\0'; tamanhoA++);

	for (tamanhoB = 0; b[tamanhoB] != '\0'; tamanhoB++);

	tamanhoCircularA = tamanhoA * 2 - 1;
	tamanhoCircularB = tamanhoB * 2 - 1;

	for (i = 0, j = 0; i < tamanhoCircularA; i++, j++) {
		if (j == tamanhoA)
			j = 0;	
		aCircular[i] = a[j];
	}
	aCircular[i] = '\0';

	for (i = 0, j = 0; i < tamanhoCircularB; i++, j++) {
		if (j == tamanhoB)
			j = 0;	
		bCircular[i] = b[j];
	}
	bCircular[i] = '\0';


	if (tamanhoB < tamanhoA) { 
		tamanhoMenorCodigo = tamanhoB; 

		for (i = 1; i <= tamanhoCircularB; i++) { 

			for (j = 0; j <= tamanhoCircularB - i; j++) {  
				aux = j + i - 1; 
				for (k = j, l = 0; k <= aux; k++, l++) { 
					substring[l] = bCircular[k];
				} 
				substring[l] = '\0';
				
				substringEstaContida = FALSO;
				substringCont = 0;

				for (m = 0; m < tamanhoCircularA; m++) {
					if (aCircular[m] == substring[substringCont]) {

						substringCont++;
						
						if (substringCont == l)
							substringEstaContida = VERDADEIRO;
					}
					else {
						substringCont = 0;
					}
				}
					
				if (substringEstaContida == VERDADEIRO && l > tamanhoMaiorSubString)
					tamanhoMaiorSubString = l;

			} 
		}

	}
	else if (tamanhoA < tamanhoB) {
		tamanhoMenorCodigo = tamanhoA;

		for (i = 1; i <= tamanhoCircularA; i++) { 

			for (j = 0; j <= tamanhoCircularA - i; j++) {  
				aux = j + i - 1; 
				for (k = j, l = 0; k <= aux; k++, l++) { 
					substring[l] = aCircular[k];
				} 
				substring[l] = '\0';

				substringEstaContida = FALSO;
				substringCont = 0;

				for (m = 0; m < tamanhoCircularB; m++) {
					if (bCircular[m] == substring[substringCont]) {

						substringCont++;
						
						if (substringCont == l)
							substringEstaContida = VERDADEIRO;
					}
					else {
						substringCont = 0;
					}
				}
					
				if (substringEstaContida == VERDADEIRO && l > tamanhoMaiorSubString)
					tamanhoMaiorSubString = l;


			} 
		}
	}

	printf("\nTamanho maior fita contigua: %d\nTamanho da menor sequencia: %d\nP/100: %.2f\n\n", tamanhoMaiorSubString, tamanhoMenorCodigo, pPorCento);

	if (tamanhoMaiorSubString >= tamanhoMenorCodigo * pPorCento)
		printf("OS INDIVIDUOS A E B SAO PARENTES\n");
	else
		printf("OS INDIVIDUOS A E B NAO SAO PARENTES\n");

	return 0;
}
#include <stdio.h>

struct Levedura {
	char nome[255];
	int qtd_gerada_por_uma;
	int qtd_dias_pupulacao_cresce;
	int qtd_pupulacao;
};

typedef struct Levedura Levedura;

#define QTD_LEVEDURAS_A_SEREM_ANALIZADAS 3
int main(){	
	
	int i;
	int dias;
	Levedura levedura_que_bruno_deve_comprar;
	Levedura leveduras[QTD_LEVEDURAS_A_SEREM_ANALIZADAS];

	for (i = 0; i < QTD_LEVEDURAS_A_SEREM_ANALIZADAS; i++) {
		
		printf("NOME DA NOVA LEVEDURA: ");
		gets(leveduras[i].nome);

		printf("QUANTIDADE DE LEVEDURAS GERADAS POR UMA ÚNICA LEVEDURA '%s' EM UMA DIVISAO: ", leveduras[i].nome);
		scanf("%d", &leveduras[i].qtd_gerada_por_uma);

		printf("QUANTIDADE DE DIAS QUE A POPULACAO '%s' CRESCERA: ", leveduras[i].nome);
		scanf("%d", &leveduras[i].qtd_dias_pupulacao_cresce);

		//"Cada placa de vidro é vendida com apenas uma única levedura", primeiro dia, (dia 0)
		leveduras[i].qtd_pupulacao = 1;

		printf("\n");

		//buffer
		fflush(stdin);
		__fpurge(stdin);
	}

	for (i = 0; i < QTD_LEVEDURAS_A_SEREM_ANALIZADAS; i++)
		for (dias = 1; dias <= leveduras[i].qtd_dias_pupulacao_cresce; dias++)
			leveduras[i].qtd_pupulacao = leveduras[i].qtd_pupulacao * leveduras[i].qtd_gerada_por_uma;


	levedura_que_bruno_deve_comprar = leveduras[0];

	for (i = 1; i < QTD_LEVEDURAS_A_SEREM_ANALIZADAS; i++) {
		if (leveduras[i].qtd_pupulacao > levedura_que_bruno_deve_comprar.qtd_pupulacao)
			levedura_que_bruno_deve_comprar = leveduras[i];
	}
	
	printf("NOME DA LEVEDURA QUE BRUNO DEVE COMPRAR: %s\n", levedura_que_bruno_deve_comprar.nome);

	return 0;
}
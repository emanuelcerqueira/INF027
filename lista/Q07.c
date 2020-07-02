//7. Solicitar a idade de uma pessoa em dias e informar na tela a idade em anos, meses e dias

#include <stdio.h>
int main(){
	int idadeEmDias, anos, meses, dias;

	printf("IDADE EM DIAS: \n");
	scanf("%d", &idadeEmDias);
	
	anos = idadeEmDias / 365;
	meses = (idadeEmDias % 365) / 30;
	dias = (idadeEmDias % 365) % 30;
	
	printf("%d ANOS, %d MESES E %d DIAS", anos, meses, dias);
			
	return 0;
}
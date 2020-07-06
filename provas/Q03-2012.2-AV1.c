/*
Questão III
Escreva um algoritmo em linguagem C que calcule e imprima a média obtida pelo aluno
para aprovação direta (se superior a 7.0) ou o valor mínimo que o aluno (não aprovado
por média) precisa obter numa prova final para ser aprovado. Considere que são
realizadas três provas durante o semestre e que para aprovação em final a média obtida
de acordo com a equação abaixo precisa ser igual ou superior a 5.0.

Média Final= ((média aritmética das três avaliações parciais)x 2+( notada prova final) x 1) / 3;

*/

#include <stdio.h>
int main(){
	float av1, av2, av3, media, final;

	printf("NOTAS DAS AVALIACOES 1, 2 E 3:\n");
	scanf("%f %f %f", &av1, &av2, &av3);

	media = (av1 + av2 + av3) / 3;

	if (media > 7) {
		printf("MEDIA DO ALUNO: %.2f", media);
	}
	else {
		final = 15 - 2 * media;
		printf("A NOTA DA PROVA FINAL DEVE SER MAIOR OU IGUAL A %.2f", final);
	}	

	
	return 0;
}
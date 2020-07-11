/*36. Em uma certificação são feitos são feitos 5 exames (I, II, III, IV e V). Escreva um
programa que leia as notas destes exames e imprima a classificação do aluno, sabendo
que a média é 70.
Classificação: A – passou em todos os exames;
B – passou em I, II e IV, mas não em III ou V;
C – passou em I e II, III ou IV, mas não em V.
Reprovado – outras situações.
*/

#include <stdio.h>
int main(){	

	float av1, av2, av3, av4, av5;
	
	printf("NOTAS DOS EXAMES I, II, III, IV e V:\n");
	scanf("%f %f %f %f %f", &av1, &av2, &av3, &av4, &av5);

	if (av1 >= 70 && av2 >= 70 && av3 >= 70 && av4 >= 70 && av5 >= 70)
		printf("CLASSIFICACAO A");
	else if (av1 >= 70 && av2 >= 70 && av3 < 70 && av4 >= 70 && av5 < 70)
		printf("CLASSIFICACAO B");
	else if (av1 >= 70 && av2 >= 70 && (av3 >= 70 || av4 >= 70) && av5 < 70)
		printf("CLASSIFICACAO C");
	else
		printf("REPROVADO");
	

	return 0;
}
/*11. Faça um algoritmo para calcular a nota semestral de um aluno. A nota semestral é obtida
pela média aritmética entre a nota de 2 bimestres. Cada nota de bimestre é composta por
2 notas de provas.
*/

#include <stdio.h>
int main(){	
	float nota1Bimestre1, nota2Bimestre1, nota1Bimestre2, nota2Bimestre2, notaSemestral;

	printf("PRIMEIRA NOTA, PRIMEIRO BIMESTRE:\n");
	scanf("%f", &nota1Bimestre1);

	printf("SEGUNDA NOTA, PRIMEIRO BIMESTRE:\n");
	scanf("%f", &nota2Bimestre1);
	
	printf("PRIMEIRA NOTA, SEGUNDO BIMESTRE:\n");
	scanf("%f", &nota1Bimestre2);

	printf("SEGUNDA NOTA, SEGUNDO BIMESTRE:\n");
	scanf("%f", &nota2Bimestre2);

	notaSemestral = (((nota1Bimestre1 + nota2Bimestre1) / 2) + ((nota1Bimestre2 + nota2Bimestre2) / 2)) / 2;

	printf("NOTA SEMESTRAL: %.2f", notaSemestral);
	
	return 0;
}
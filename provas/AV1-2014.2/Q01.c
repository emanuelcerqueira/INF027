/*
Questão I
Escreva um programa em C, que leia a probabilidade de dois eventos independentes
acontecerem. Em seguida, o programa deverá calcular e imprimir a probabilidade de um
dos dois eventos ocorrer, bem como dos dois eventos ocorrerem. A probabilidade é dada
pelas fórmulas abaixo:
P (A e B) = P(A) x P(B)
P(A ou B) = P(A) + P (B) – P(A e B) 
*/

#include <stdio.h>
int main(){
	
	float pa, pb, paOupb, paEpb;

	printf("POSSIBILIDADE EVENTO 'A':\n");
	scanf("%f", &pa);
	
	pa/=100;	

	printf("POSSIBILIDADE EVENTO 'B':\n");
	scanf("%f", &pb);

	pb /= 100;

	paEpb = pa * pb * 100;
	paOupb = (pa + pb - paEpb / 100) * 100;	
	
	printf("P(A e B): %.2f POR CENTO", paEpb);
	printf("\nP(A ou B): %.2f POR CENTO", paOupb);

	return 0;
}
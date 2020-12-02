/*78. Escreva um programa em C, que leia uma string e um caracter e conte o número de
ocorrências do caracter lido na string.
*/

#include <stdio.h> 

#define MAX_STR 256
int main() {

	char caracter;
	char str[MAX_STR];
	int tamanho;
	int i;
	int ocorrencias = 0;

	printf("STRING:\n");
	gets(str);

	printf("CARACTER:\n");
	scanf("%c", &caracter);

	for (tamanho = 0; str[tamanho] != '\0'; tamanho++);
	
	for (i = 0; i < tamanho; i++)
		if (str[i] == caracter)
			ocorrencias++;
	
	printf("'%c' tem %d ocorrencias na string '%s'", caracter, ocorrencias, str);
		
	return 0;
}
/*77. Escreva um programa em C, que leia uma string, gere uma nova string com o texto
invertido e imprima esta nova string.
*/

#include <stdio.h> 

#define MAX_STR 256
int main() {

	char str[MAX_STR];
	char str_new[MAX_STR];
	int tamanho;
	int i;
	int j;

	printf("STRING:\n");
	gets(str);

	for (tamanho = 0; str[tamanho] != '\0'; tamanho++);
	
	for (i = 0, j = tamanho - 1; i < tamanho; i++, j--)
		str_new[i] = str[j];

	str_new[i+1] = '\0';
	
	printf("%s inverso: %s", str, str_new);
		

	return 0;
}
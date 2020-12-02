/*78. Escreva um programa em C, que gere a substring de uma string original, dado a posição
inicial e a final da substring
*/

#include <stdio.h> 

#define MAX_STR 256
int main() {
	
	int i;
	int j;
	int inicial;
	int final;
	char str[MAX_STR];
	char str_new[MAX_STR];


	printf("STRING:\n");
	gets(str);

	printf("INICIAL:\n");
	scanf("%d", &inicial);

	printf("FINAL:\n");
	scanf("%d", &final);


	for (i = inicial, j = 0; i <= final; i++, j++) {
		str_new[j] = str[i];
	}
	str_new[i+1] = '\0';

	puts(str_new);
		
	return 0;
}
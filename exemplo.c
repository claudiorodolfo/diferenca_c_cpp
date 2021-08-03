#include <stdio.h>

int main() {
	char nome[30];
	int idade;
	float altura;

	scanf("%s %d %f", &nome, &idade, &altura);
	printf("%s tem %d anos\n e mede %f metros.\n", nome, idade, altura);
	return 0;
}

#include <stdio.h>
#include <locale.h>

int main () {
	int DDD;

	printf ("Digite o DDD que deseja descobrir de onde e: ");
	scanf ("%d", &DDD);

	switch (DDD) {
		case 61:
		printf ("Brasilia");
		break;

		case 71: 
		printf ("Salvador");
		break;

		case 11:
		printf ("Sao Paulo");
		break;

		case 21:
		printf ("Rio de Janeiro");
		break;

		case 32:
		printf ("Juiz de Fora");
		break;

		case 19:
		printf ("Campinas");
		break;

		case 27:
		printf ("Vitoria");
		break;

		case 31:
		printf ("Belo Horizonte");
		break;

		default:
		printf ("Cidade sem identificacao.");
	} 
} 
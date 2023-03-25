#include <stdio.h>
#include <locale.h>

int main () {
	int operacao;
	float num, num2, calculo;
	printf ("ESCOLHA UMA DAS OPERAÇÕES MATEMATICAS");
	printf ("\n[1] ADICAO");
	printf ("\n[2] SUBTRACAO");
	printf ("\n[3] MULTIPLICACAO");
	printf ("\n[4] DIVISAO\n\n");
	scanf ("%d", &operacao);

	switch (operacao) {
		case 1: 
		printf ("Digite um numero: ");
		scanf ("%f", &num);
		printf ("Digite outro numero: ");
		scanf ("%f", &num2);
		calculo = num + num2;
        printf ("\n\nResultado: %.1f", calculo);
		break; 

		case 2: 
		printf ("Digite um numero: ");
		scanf ("%f", &num);
		printf ("Digite outro numero: ");
		scanf ("%f", &num2);
		calculo = num - num2;
        printf ("\n\nResultado: %.1f", calculo);
		break; 

		case 3: 
		printf ("Digite um numero: ");
		scanf ("%f", &num);
		printf ("Digite outro numero: ");
		scanf ("%f", &num2);
		calculo = num * num2;
        printf ("\n\nResultado: %.1f", calculo);
		break; 

		case 4: 
		printf ("Digite um numero: ");
		scanf ("%f", &num);
		printf ("Digite outro numero: ");
		scanf ("%f", &num2);
		calculo = num / num2;
        printf ("\n\nResultado: %.1f", calculo);
		break; 

		default:

		printf ("Operacao invalida.");
	}
}
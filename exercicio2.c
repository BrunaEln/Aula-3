#include <stdio.h>
#include <locale.h>

main () {
	int estado;
	float valor, preco, taxa;

	printf ("Digite o valor do produto: ");
	scanf ("%f", &preco);
	system ("cls");

	printf ("ESCOLHA UM ESTADO:");
	printf ("\n[1] São Paulo");
	printf ("\n[2] Rio de Janeiro");
	printf ("\n[3] Distrito Federal");
	printf ("\n[4] Mato Grosso\n");
	scanf ("%d", &estado);

	switch (estado) {
		case 1:
		taxa = preco + (preco * 0.15);
		printf ("O valor final da sua compra: %.2f", taxa);
		break;
			
		case 2: 
		taxa = preco + (preco * 0.20);
		printf ("O valor final da sua compra: %.2f", taxa);
		break;
	
		case 3: 
		taxa = preco + (preco * 0.25);
		printf ("O valor final da sua compra: %.2f", taxa);
		break;

		case 4:
		taxa = preco + (preco * 0.10);
		printf ("O valor final da sua compra: %.2f", taxa);
		break;	

		default: 
		printf ("Erro: digite um numero valido.");	
	}
}
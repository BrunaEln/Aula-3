#include <stdio.h>
#include <locale.h>

int main () {
	int opcao1, opcao2, opcao3, cal1, cal2, cal3, totalcal;
	printf ("MONTE O SUA REFEICAO:");
	printf ("\n_____________________");
	printf ("\nPRATOS:");
	printf ("\n_____________________");
	printf ("\n[1] Vegetariano");
	printf ("\n[2] Peixe");
	printf ("\n[3] Frango");
	printf ("\n[4] Carne");

	printf ("\nEscolha uma opcao: ");
	scanf ("%d", &opcao1);
	system ("cls");

	switch (opcao1) {
		case 1:
		cal1 = 180;
		break;

		case 2:
		cal1 = 230;
		break;

		case 3:
		cal1 = 250;
		break;

		case 4:
		cal1 = 350;
		break;

		default:
		printf ("Digite um numero de codigo valido!");
}

	printf ("MONTE O SUA REFEICAO:");
	printf ("\n_____________________");
	printf ("\nSOBREMESAS:");
	printf ("\n_____________________");
	printf ("\n[1] Abacaxi");
	printf ("\n[2] Sorvete Diet");
	printf ("\n[3] Mousse Diet");
	printf ("\n[4] Mousse Chocolate");

	printf ("\nEscolha uma opcao: ");
	scanf ("%d", &opcao2);
	system ("cls");

	switch (opcao2) {
		case 1:
		cal2 = 75;
		break;

		case 2:
		cal2 = 110;
		break;

		case 3: 
		cal2 = 170;
		break;

		case 4:
		cal2 = 200;		
		break;

		default:
		printf ("Digite um numero de codigo valido!");
}

	printf ("MONTE O SUA REFEICAO:");
	printf ("\n_____________________");
	printf ("\nBEBIDAS:");
	printf ("\n_____________________");
	printf ("\n[1] Cha");
	printf ("\n[2] Suco Laranja");
	printf ("\n[3] Suco Melao");
	printf ("\n[4] Refrigerante Diet");

	printf ("\nEscolha uma opcao: ");
	scanf ("%d", &opcao3);
	system ("cls");

	switch (opcao3) {
		case 1:
		cal3 = 20;
		break;

		case 2:
		cal3 = 70;
		break;

		case 3:
		cal3 = 100;
		break;

		case 4:
		cal3 = 65;
		break;

		default:
		printf ("\n\nDigite um numero de codigo valido!");
}

		totalcal = cal1 + cal2 + cal3;
		printf ("O total de calorias a serem ingeridas e de %d.", totalcal);

}
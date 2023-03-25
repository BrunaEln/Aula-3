#include <stdio.h>
#include <locale.h>

int main () {
	int codigo;
	printf ("Especificacao             Preco Unitario");
	printf ("\n100 - Cachorro quente ------ R$ 10,10");
	printf ("\n101 - Bauru simples -------- R$ 8,30");
	printf ("\n102 - Bauru/Ovo ------------ R$ 8,50");
	printf ("\n103 - Hamburguer ----------- R$ 12,50");
	printf ("\n104 - Cheeseburguer -------- R$ 13,25");

	printf ("\n\nDigite o numero do codigo: ");
	scanf ("%d", &codigo);
 
	switch (codigo) {
		case 100:
		printf ("Seu pedido vai custar R$ 10,10");
		break;

		case 101:
		printf ("Seu pedido vai custar R$ 8,30");
		break;

		case 102:
		printf ("Seu pedido vai custar R$ 8,50");
		break;

		case 103:
		printf ("Seu pedido vai custar R$ 12,50");
		break;

		case 104:
		printf ("Seu pedido vai custar R$ 13,25");
		break;

		default:
		printf ("Por favor, digite um codigo valido.");
	}
}

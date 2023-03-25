#include <stdio.h>
#include <locale.h>

int main () {
	float numero, resto;
	printf ("Digite um numero: ");
	scanf ("%f", &numero);

    resto = numero % 2;
    resto2 = numero % 3;
    resto3 = numero % 5;
	
	if (resto == 0) {
	printf ("Divisivel por 5"); 
	
	} else if (resto2 == 0){
	printf ("Divisivel por 3");

	} else if (resto3 == 0) {
	printf ("Divisivel por 2");

	} else {
    printf ("Nao divisivel por nenhum dos numeros.");
}	
}
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
	float num;

	printf ("Digite um numero: ");
	scanf ("%f", &num);
	if (num > 0) {
		printf ("Potencia:%.1f",pow(num,2));
		printf ("\nRaiz:%.1f",sqrt (num));
	} else {
	printf ("Este e um numero negativo.");
	}
}
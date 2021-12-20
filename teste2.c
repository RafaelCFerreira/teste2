#include <stdio.h>

int main()
{
	float metros, centimetros;
	printf("Entre com um valor em M.\n");
	scanf("%f", &metros);
	centimetros = metros * 100;
	printf("Valor em cm é %.2f\n", centimetros);
	return 0;
}

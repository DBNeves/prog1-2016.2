#include <stdio.h>
// IMPRIMA UM SALÁRIO COM 20% DE DESCONTO //
int main()
{
	int salario, desconto;
	
	printf("Qual o seu salario? \n");
	scanf("\n%d", &salario);
	desconto=salario*20/100;
	printf("Salario com desconto = %.1f", (float)salario-desconto);
	return 0;
}

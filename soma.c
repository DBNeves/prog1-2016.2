#include <stdio.h>

int main()
{
	// Variáveis //
	int num1;
	int num2;
   
    // Primeira pergunta //
	printf("Diga o primeiro numero. \n");
	
	// Primeira resposta //
	scanf("%d", &num1);
	
	// Segunda pergunta //
	printf("Diga o segundo numero. \n");
	
	// Segunda resposta // 
	scanf("%d", &num2);
	
	// Soma das duas respostas //
	printf("  \nSoma = %d", num1 + num2);
	printf("\nSubtracao = %d", num1-num2);
	printf("\nProduto = %d", num1*num2);
	printf("\nDivisao = %.2f", (float)num1/num2);

	return 0;
}


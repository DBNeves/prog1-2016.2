#include<stdio.h>

int main()
{
	int origem , destino;
	float preco;
	//DEFININDO A ORIGEM//
	printf("\nOla, meu nome e Daniel, qual a sua origem?");
	printf("\n1-Rio/2-SP/3-SSA \n");
	scanf("\n%d" , &origem);
	switch(origem)
	{
	//ORIGEM RIO DE JANEIRO//
		case 1: 
			printf("Entendi, Rio de Janeiro. Qual o seu destino?");
			printf("\n1-Rio/2-SP/3-SSA \n");
			scanf("\n%d" , &destino);
			switch (destino)
				case 1:
					printf("\nOps!! Seu destino nao pode ser o mesmo que a origem. Qual e seu destino?");
						printf("\n2-SP/3-SSA \n");
						scanf("\n%d" , &destino);
					 if (destino == 2)
						{
							printf("\nEntendi, Sao Paulo! \nValor da passagem Rio de Janeiro --> Sao Paulo \nR$150,00 ou $%3.f \n \nObrigado e boa viagem! \n", (float)150.00/3.40);
						}
			 	 	 if (destino == 3)
						{
							printf("\nEntendi, Salvador! \nValor da passagem Rio de Janeiro --> Salvador \nR$300,00 ou $%3.f \n \nObrigado e boa viagem! \n", (float)300.00/3.40);
						}
				break;
			
			
			if (destino == 2)
				{
					printf("\nEntendi, Sao Paulo! \nValor da passagem Rio de Janeiro --> Sao Paulo \nR$150,00 ou $%3.f \n \nObrigado e boa viagem! \n", (float)150.00/3.40);
				}
			
			
			if (destino == 3)
				{
					printf("\nEntendi, Salvador! \nValor da passagem Rio de Janeiro --> Salvador \nR$300,00 ou $%3.f \n \nObrigado e boa viagem! \n", (float)300.00/3.40);
				}
		break;	
		
	//ORIGEM SAO PAULO//
		case 2: 
			printf("Entendi, Sao Paulo. Qual o seu destino?");
			printf("\n1-Rio/2-SP/3-SSA \n");
			scanf("\n%d" , &destino);
			if (destino == 1)
			{
				printf("\nEntendi, Rio de Janeiro! \nValor da passagem Sao Paulo --> Rio de Janeiro \nR$160,00 ou $%3.f \n \nObrigado e boa viagem! \n", (float)160.00/3.40);
			}
		
			switch (destino)
				case 2:
		
					printf("\nOps!! Seu destino nao pode ser o mesmo que a origem. Qual e seu destino?");
						printf("\n1-RJ/3-SSA \n");
						scanf("\n%d" , &destino);
					 
					 
					 if (destino == 1)
						{
							printf("\nEntendi, Rio de Janeiro! \nValor da passagem Sao Paulo --> Rio de Janeiro \nR$160,00 ou $%3.f \n \nObrigado e boa viagem! \n", (float)160.00/3.40);
						}
			 	 	 if (destino == 3)
						{
							printf("\nEntendi, Salvador! \nValor da passagem Sao Paulo --> Salvador \nR$180,00 ou $%3.f \n \nObrigado e boa viagem! \n", (float)180.00/3.40);
						}
				break;
		
			if (destino == 3)
			{
				printf("\nEntendi, Salvador! \nValor da passagem Sao Paulo --> Salvador \nR$180,00 ou $%3.f \n \nObrigado e boa viagem! \n", (float)180.00/3.40);	
			}
		break;							
		
	// ORIGEM SALVADOR//	
		case 3:
			printf("Entendi, Sao Paulo. Qual o seu destino?");
			printf("\n1-Rio/2-SP/3-SSA \n");
			scanf("\n%d" , &destino);
			if (destino == 1)
			{
				printf("\nEntendi, Rio de Janeiro! \nValor da passagem Salvador --> Rio de Janeiro \nR$280,00 ou $%3.f \n \nObrigado e boa viagem! \n", (float)280.00/3.40);
			}
			
			if (destino == 2)
			{
				printf("\nEntendi, Sao Paulo! \nValor da passagem Salvador --> Sao Paulo \nR$175,00 ou $%3.f \n \nObrigado e boa viagem! \n", (float)175.00/3.40);	
			}
		switch(destino)
			case 3:
		
					printf("\nOps!! Seu destino nao pode ser o mesmo que a origem. Qual e seu destino?");
						printf("\n1-RJ/2-SP \n");
						scanf("\n%d" , &destino);
					 if (destino == 1)
						{
							printf("\nEntendi, Rio de Janeiro! \nValor da passagem Salvador --> Rio de Janeiro \nR$280,00 ou $%3.f \n \nObrigado e boa viagem! \n", (float)280.00/3.40);
						}
			 	 	 if (destino == 2)
						{
							printf("\nEntendi, Sao Paulo! \nValor da passagem Salvador --> Sao Paulo \nR$175,00 ou $%3.f \n \nObrigado e boa viagem! \n", (float)175.00/3.40);
						}
			
		break;	
	}
	

	
	
	
	
	
	
	system ("pause");
	return 0;
}

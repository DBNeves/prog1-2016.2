#include<stdio.h>

int main()
{
	float matA[2][3];
	float matB[3][2];
	float matR[2][2];
	int i,j;

	printf("\nEntre com os termos da matriz A");
	printf("\n-------------------------------------------------");
	
for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
	{
	printf("\nEntre com o termo (%d,%d):",i,j );
	scanf("%d", matA[i][j]);	
	}
}

		printf("\nEntre com os termos da matriz B");
	printf("\n-------------------------------------------------");
	
for(i=0;i<3;i++)
{
	for(j=0;j<2;j++)
	{
	printf("\nEntre com o termo (%d,%d):",i,j );
	scanf("%d", matB[i][j]);	
	}
}
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}

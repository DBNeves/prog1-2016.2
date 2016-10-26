#include <stdio.h>
int main()
{
	int alt;
	int base;
	float area;
	
	
	printf("\nQual a altura do triangulo? \n");
	scanf("\n%d", &alt);
	
	printf("\nQual a base desse triangulo? \n");
	scanf("\n%d", &base);
	
	area = (float)(base*alt)/2;
	
	printf("\n Area do triangulo = %f", area);
	
	return 0;
}

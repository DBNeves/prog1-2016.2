#include<stdio.h>

int main()
{
  char frase[50];
  int cont;
  cont=1;
 
 printf("\nEntre com a frase: \n");
 scanf("\n%s" , frase);

for(cont=1;cont>=10;cont++)
{
  printf("\n%s", frase);
}
return 0;
}
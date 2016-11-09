#include<stdio.h>

int main()
{
  char letra;
  
  printf("\nEntre com uma letra:");
  scanf("%c", &letra);
  
  if((letra>=65) && (letra<=90))
  {
    printf("\nEssa letra e maiuscula. \n");
  }
  
  else
  {
    printf("\nEssa letra e minuscula. \n");
  }
   
 
   return 0;
}

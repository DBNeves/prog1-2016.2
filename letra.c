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
  
  else if((letra>=97) && (letra<=122))
  {
    printf("\nEssa letra e minuscula. \n");
  }
  
  else if((letra>=48)&&(letra<=57))
  {
    printf("\nIsso e um numero \n");
  }
 
   return 0;
}

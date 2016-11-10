#include<stdio.h>

int main()
{
    float av1;
    float av2;
    float media;
    char nome[50];
 
  
     printf("\nNome do aluno");
    scanf("%s", nome);
    
    printf("\nEntre com a AV1:");
    scanf("%f", &av1);
    
    printf("\nEntre com a AV2:");
    scanf("%f", &av2);
    
    media = (av1+av2)/2;
    
    printf("\nOla %s, sua media e: %f", nome, media);

   
    return 0;
}
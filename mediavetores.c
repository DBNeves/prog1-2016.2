#include<stdio.h>

int main()
{
  float soma=0,media;
  float notas[10];
  int aluno;
 
  for(aluno=0;aluno<=9;aluno++)
  {
    printf("\nEntre com a AV1 do aluno %d:", aluno+1);
    scanf("%f", &notas[aluno]);
    soma=soma+notas[aluno];
  }
   media=soma/10;
  printf("\nA media da turma = %f" ,  media);
  
  printf("\nAlunos com nota >= media");
  
  for(aluno=0;aluno<=9;aluno++)
  {
    if(notas[aluno]>= media)
    {
      printf("\nAluno %d -> Nota = %f", aluno+1,notas[aluno]);
    
    }  
  
  }
  
  
  
  
  
  
  return 0;
}

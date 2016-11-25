#include<stdio.h>

int main()
{
    float notas[4][3],media,av1,av2,av3;
    int i, j;
    int mat;
    
    
    
    
    for (i=0;i<=3;i++)
    {   for(j=0;j<=2;j++)
           {            
             printf("\n---------------------------------------");
             printf("\nEntre com a av%d do aluno %d:" ,j+1,i+1);
             scanf("%f", &notas[i][j]);
           }   
    
}   
 //gerar relatorio//
 printf("\n1-Resultado do semestre");
 printf("\n----------------------------------------");  
 printf("\nNome \t\tAV1 \tAV2 \tAV3");
 printf("\n----------------------------------------");     



for(i=0;i<4;i++)
{
 printf("\nAluno %d \t%.1f \t%.1f \t%.1f", i+1,notas[i][0],notas[i][1],notas[i][2]);
 printf("\n----------------------------------------");  

}
printf("\n----------------------------------------");
//gerar relatorio//
 printf("\n\n2-Resultado do semestre");
 printf("\n----------------------------------------");  
 printf("\nNome \t\tAV1" );
 printf("\n----------------------------------------");     



for(i=0;i<4;i++)
{
 printf("\nAluno %d \t%.1f", i+1,notas[i][0]);
 printf("\n----------------------------------------");  

}
printf("\n----------------------------------------");


printf("\n\nEntre coma matricula:");
scanf("%d", &mat);

//gerar relatorio//
 printf("\n\n2-Resultado do semestre");
 printf("\n-----------------------------------------------");  
 printf("\nNome \t\tAV1 \tAV2 \tAV3 \tSituacao" );
 printf("\n-----------------------------------------------");     

i=mat-1;
av1=notas[i][0];
av2=notas[i][1];
av3=notas[i][2];
media = (av1*av2*av3)/3;


if(av1>=av2 && av2<=av3)//av1 é a maior//
{
 if(av2>av3)
 {
  media=(av1*av3)/2;
 }
 else
 {
  media=(av1+av2)/2;
 }
}
else if(av2>av3)//av2 é a maior//
{
   if(av1>av3)
   {
   media=(av2+av1)/2;
   }             
                 else
                 {
                  media=(av2+av3)/2;
                 }


}
else if(av1>av2)//av3 é a maior//
{
 media=(av1+av3)/2;
}
else{
     media=(av3+av2)/2;
     }


if(media>=6)
{
 printf("\nAluno %d \t%.1f \t%.1f \t%.1f \tAprovado", i+1,notas[i][0],notas[i][1],notas[i][2]);
 printf("\n------------------------------------------------");  
 printf("\n-------------------------------------------------");
}
else{
     printf("\nAluno %d \t%.1f \t%.1f \t%.1f \tReprovado", i+1,notas[i][0],notas[i][1],notas[i][2]);
 printf("\n----------------------------------------");  
 printf("\n----------------------------------------");
     
     
     }






system("pause");    
return 0;    
}

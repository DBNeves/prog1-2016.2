#include<stdio.h>


int moldura(a,b,c)
{
 int i,j,carac=0;
 
 
 for(i=1;i<=a;i++)
 {
  
  for(j=1;j<=b;j++)
  {
   
                   if((i==1) || (i==a))
                    {
                     printf("%c",c);
                     carac++;
                    }
 
                    else
                    {
                        if((j==1) || (j==b))
                        {
                          printf("%c",c);
                          carac++;
                        } 
                        else
                        {
                        printf(" ");
                        }
                    }
  }
 printf("\n");
}
printf("\n");
return carac;

}












int main()
{
 int a,b,resp;
 char c;
 
printf("-----------------------------------\n"); 
 printf("Entre com um caracter: ");
 scanf("%c",&c);

printf("-----------------------------------\n");
 printf("Entre com o valor de a: ");
 scanf("%d", &a);
 
printf("-----------------------------------\n"); 
 printf("Entre com o valor de b: ");
 scanf("%d",&b);
printf("-----------------------------------\n"); 
 printf("\n");




resp=moldura(a,b,c);
printf("-----------------------------------\n");
printf("Total de caracteres: %d\n", resp);
printf("-----------------------------------\n");

system("pause");
return 0;

}

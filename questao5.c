#include<stdio.h>

int potenciaInt(base,exp)
{
 int i,pot=1;
 for(i=1;i<=exp;i++)
 {
 pot=pot*base;
 }
 return pot;



}



int main()
{
    int base,exp,resp;
    
    printf("Entre com a base: ");
    scanf("%d", &base);
     
    printf("Entre com o expoente: ");
    scanf("%d", &exp);

    resp=potenciaInt(base,exp);
    printf("Total = %d\n", resp);

system("pause");
return 0;
}

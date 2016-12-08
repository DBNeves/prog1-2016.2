#include <stdio.h>

int main() 

{
  int i, j, m; 
  int matA[2][3], matB[3][2], matR[2][2];
    
  
    printf("\nMatriz A\n.........................................\n\n");
    for (i=0; i<2; i++) {
      for(j=0; j<3; j++) {
        printf("Entre com o elemento (%d,%d): ", (i+1), (j+1));
        scanf("%d", &matA[i][j]);
      }
    }
    printf("\nMatriz B\n..................................\n\n");
    for (i=0; i<3; i++) {
      for (j=0; j<2; j++) {
        printf("Entre com o elemento (%d,%d): ", (i+1), (j+1));
        scanf("%d", &matB[i][j]); 
      }
    }
    for (i=0;i<2; i++) {
      for (j=0; j<2; j++) {
        for (m=0; m<3; m++) {
          matR[i][j] = matR[i][j] + (matA[i][m] * matB[m][j]); 
 
        }
      }
    }
    printf("\nMatriz Resultante\n..................................\n\n");
    for (i=0; i<2; i++) {
      for (j=0; j<2; j++) {
        printf("%d ", matR[i][j]);
      }
      printf("\n");
    }
  printf("\n");
  return(0);  
}


#include <stdio.h>
#include <stdlib.h>
#include  <string.h>

int main()
{
    int MATRIZ_A[45][45],MATRIZ_B[45][45],MATRIZ_C[45][45];
    int f_A,c_A,c_B;
    int i,j,k;
    /*Creaci�n de la matriz A*/
    printf("\tMATRIZ A\n");
    printf("Numero de filas de la matriz A: ");
    scanf("%d",&f_A);
    printf("Numero de columnas de la matriz A: ");
    scanf("%d",&c_A);
    for(i=0;i<f_A;i++)
    {
        for(j=0;j<c_A;j++)
        {
          printf("Ingrese el valor (%d,%d) de la MATRIZ A: ",i,j);
          scanf("%d",&MATRIZ_A[i][j]);
        }
    }
    /*Creaci�n de la matriz B*/
    printf("\n\tMATRIZ B\n");
    printf("Numero de filas de la matriz B: %d\n",c_A);
    printf("Numero de columnas de la matriz B: ");
    scanf("%d",&c_B);
    for(i=0;i<c_A;i++)
    {
        for(j=0;j<c_B;j++)
        {
          printf("Ingrese el valor (%d,%d) de la MATRIZ B: ",i,j);
          scanf("%d",&MATRIZ_B[i][j]);
        }
    }
    /*Creaci�n de la matriz C*/
    for(i=0;i<f_A;i++)
    {
        for(j=0;j<c_B;j++) MATRIZ_C[i][j]=0;
    }
    /*Asignamos valore a la matriz C*/
    for(i=0;i<f_A;i++)
    {
        for(j=0;j<c_B;j++)
        {
            for(k=0;k<c_A;k++) MATRIZ_C[i][j] += MATRIZ_A[i][k] * MATRIZ_B[k][j];
        }
    }

    /*En esta parte ya se muestran los resultados*/
    printf("\n\tMATRIZ A\n");
    for(i=0;i<f_A;i++)
    {
        for(j=0;j<c_A;j++) printf(" %d",MATRIZ_A[i][j]);
        printf("\n");
    }

    printf("\n\tMATRIZ B\n");
    for(i=0;i<c_A;i++)
    {
        for(j=0;j<c_B;j++) printf(" %d",MATRIZ_B[i][j]);
        printf("\n");
    }

    printf("\n\tMATRIZ C\n");
    for(i=0;i<f_A;i++)
    {
        for(j=0;j<c_B;j++) printf(" %d",MATRIZ_C[i][j]);
        printf("\n");
    }

}

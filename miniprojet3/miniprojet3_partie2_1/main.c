#include <stdio.h>
#include <stdlib.h>
typedef struct arrstruct{
int arr[100][100];


}arrstruct;

void printarray(arrstruct aarr,int N,int M )   {


  printf("La transposition de la matrice est:\n");
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            printf("%d\t",aarr.arr[i][j]);
        }
printf("\n");
    }


}


arrstruct getarray(int *n,int *m){
arrstruct aarr;

    int matrice[100][100];
    printf("Entrez le nombre de lignes et de colonnes: ");
    scanf("%d%d",&*n,&*m);

    printf("Entrez les elements de la matrice: \n");
    for(int i = 0; i < *n; i++)
    {
        for(int j = 0; j < *m; j++)
        {
            printf("matrice[%d][%d]:",i,j);
            scanf("%d", &matrice[i][j]);
        }
    }

printf("\n");
    for(int i = 0; i < *n; i++)
    {
        for(int j = 0; j < *m; j++)
        {
            aarr.arr[j][i] = matrice[i][j];
        }
    }
return aarr;}
void main()
{int l,k;
   arrstruct arr;
arr=getarray(&l,&k);

printarray(arr,l,k);
}

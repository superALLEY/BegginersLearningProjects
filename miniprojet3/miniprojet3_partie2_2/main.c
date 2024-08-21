#include <stdio.h>
#include <stdlib.h>
typedef struct prod{
int pro[100][100];



}prod;



void printarray(prod c,int N,int M )   {


  printf("La transposition de la matrice est:\n");
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            printf("%d\t",c.pro[i][j]);
        }
printf("\n");
    }


}

prod produit(int A[100][100],int B[100][100],int La,int Cb,int Ca){




prod c;

for(int i=0;i<La;i++){

            for(int j=0;j<Cb;j++){

                c.pro[i][j]=0;
                    for(int l=0;l<Ca;l++){
                      c.pro[i][j]=c.pro[i][j]+(A[i][l])*(B[l][j]);

                    }

            }

}


return c;}




int main(void)
{int l,k;
int lA,cA,lB,cB;
printf("veuillez saisir le nombre de lignes de la matrice A:");
scanf("%d",&lA);
printf("veuillez saisir le nombre de colonnes de la matrice A:");
scanf("%d",&cA);
int a[100][100];

      for(int i=0;i<lA;i++)
            {
                for(int j=0;j<cA;j++)
                {
                        printf("Saisisez la valeure de A(%d,%d):",i+1,j+1);
                        scanf("%d",&a[i][j]);
                }
            }


printf("veuillez saisir le nombre de lignes de la matrice B: ");
scanf("%d",&lB);
printf("veuillez saisir le nombre de colonnes de la matrice B: ");
scanf("%d",&cB);
int b[100][100];


      for(int  i=0;i<lB;i++)
            {
                for(int j=0;j<cB;j++)
                {
                        printf("veuillez saisirla valeure de B(%d,%d): ",i+1,j+1);
                        scanf("%d",&b[i][j]);
                }
            }





  prod arr;

arr=produit(a,b,lA,cB,cA);
printarray(arr,lA,cB);

return 0;}



















/*#include <stdio.h>
#include <stdlib.h>

int foncprod(int A[10][10],int B[10][10],int La,int Ca,int Lb ,int Cb,int **c1){

int c1[La][Cb];
for(int i=0;i<La;i++){

            for(int j=0;j<Cb;j++){

                c1[i][j]=0;
                    for(int l=0;l<Ca;l++){
                      c1[i][j]=c1[i][j]+(A[i][l]*B[l][j]);

                    }

            }

}for(int i=0;i<La;i++){

    for(int j=0;j<Cb;j++){
    printf("%d  ",c1[i][j]);
    }printf("\n");}

return 0;


}
int main (){

int cA,lA,lB,cB;
int c[lA][cB];

printf("veuillez saisir le nombre de lignes de la matrice A:");
scanf("%d",&lA);
printf("veuillez saisir le nombre de colonnes de la matrice A:");
scanf("%d",&cA);
int a[lA][cA];

      for(int i=0;i<lA;i++)
            {
                for(int j=0;j<cA;j++)
                {
                        printf("Saisisez la valeure de A(%d,%d):",i+1,j+1);
                        scanf("%d",&a[i][j]);
                }
            }


printf("veuillez saisir le nombre de lignes de la matrice B: ");
scanf("%d",&lB);
printf("veuillez saisir le nombre de colonnes de la matrice B: ");
scanf("%d",&cB);
int b[lB][cB];


      for(int  i=0;i<lB;i++)
            {
                for(int j=0;j<cB;j++)
                {
                        printf("veuillez saisirla valeure de B(%d,%d): ",i+1,j+1);
                        scanf("%d",&b[i][j]);
                }
            }

foncprod(a,b,lA,cA,lB,cA,&c);
/*for(int i=0;i<lA;i++){

    for(int j=0;j<cB;j++){
    printf("%d  ",c[i][j]);
    }printf("\n");}
return 0;}*/

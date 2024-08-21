#include <stdio.h>
#include <stdlib.h>
typedef struct arrstruct{
int arr[100][100];


}arrstruct;
typedef struct prod{
int pro[100][100];



}prod;






arrstruct transposee(int matrice[100][100],int n,int m){
arrstruct aarr;



printf("\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            aarr.arr[j][i] = matrice[i][j];
        }
    }
return aarr;}




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



int main(){



int l,k;
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

arrstruct transA,transB;
printf("le transposee de la matrice A : \n");
transA=transposee(a,lA,cA);
transB=transposee(b,lB,cB);

for (int i=0;i<cA;i++){
    for(int j=0;j<lA;j++){
        printf("%d  ",transA.arr[i][j]);
    }
    printf("\n");
}

printf("le produit matricielle de A et B : \n");
prod produit1;
produit1=produit(a,b,lA,cB, cA);


for (int i=0;i<lA;i++){
    for(int j=0;j<cB;j++){
        printf("%d  ",produit1.pro[i][j]);
    }
    printf("\n");
}


printf("(A*transA + B*transB) : \n");
int sommepr[100][100];
prod prodA;
prod prodB;
prodA=produit(a,transA.arr,lA,lA,cA);
prodB=produit(b,transB.arr,lB,lB,cB);
 for (int i=0;i<lA;i++){
    for(int j=0;j<cA;j++){
        sommepr[i][j]=prodA.pro[i][j]+prodB.pro[i][j];
    }
 }
for (int i=0;i<lA;i++){
    for(int j=0;j<cB;j++){
        printf("%d  ",sommepr[i][j]);
    }
    printf("\n");
}





return 0;}







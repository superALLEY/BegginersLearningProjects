#include <stdio.h>
#include <stdlib.h>
#define MAX 50
#define SIZE 50


typedef struct arr{};


/*********Fonction des tries**********/
int triparselection(){




    int i,n,ma ,m,pomax;
    int t[MAX];

        do{
     printf("veuillez taper le dim du tableau : ");
     scanf("%d",&n);
        }while(n>MAX || n<1);


    m=n;
        for(i=0;i<n;i++){
        printf("la valeur de lelement num %d :" ,i+1);
        scanf("%d",&t[i]);

        }

        while(n>0){
            ma=t[0];
            pomax=0;
        for(i=0;i<n;i++){
        if(t[i]>ma){
            ma=t[i];
            pomax=i;
        }

    }
    for(i=pomax;i<n;i++){
        t[i]=t[i+1];
    }
    t[n-1]=ma;
    n--;
}
    for(i=0;i<m;i++){
    printf("%7d ",t[i]);


}


    return 0;




}
int triparinsertion(){






  int tab[1000];
  int i, j,m, tmp,n;

   do{
     printf("veuillez taper le dim du tableau : ");
     scanf("%d",&n);
        }while(n>SIZE || n<1);


        m=n;
        for(i=0;i<n;i++){
        printf("la valeur de lelement num %d :" ,i+1);
        scanf("%d",&tab[i]);

        }


  for (i=1 ; i <= n-1; i++) {
    j = i;

    while (j > 0 && tab[j-1] > tab[j]) {
      tmp = tab[j];
      tab[j] = tab[j-1];
      tab[j-1] = tmp;

      j--;
    }
  }

  printf("\n******** tableau triée par ordre croissant ********\n");

  for (i=0; i < m; i++)
     printf("%4d", tab[i]);

  return 0;
}



int triaubulles(){




  int tab[50];
  int i,n;
  printf("veuillez taper la dim du tab :");
  scanf("%d",&n);
  for (i =0; i<n;i++){
        printf("element un du tab %d :" ,i+1);
    scanf("%d",&tab[i]);

  }
  int ech;
  do{ ech=0;
        for(i=0;i<n-1;i++){

            if(tab[i]>tab[i+1]){
                int tmp;
                tmp=tab[i];
                tab[i]=tab[i+1];
                tab[i+1]=tmp;
                ech++;
            }

        }
  }while(ech>0);
  for (i=0;i<n;i++){
  printf("%7d",tab[i]);
  printf("\t");
  }
    return 0;



}
int triparshell(){


    int AZ;
    printf("VEUILLEZ  saisir le nombre du colones du tableau : ");
    scanf("%d",&AZ);


    int K,L,I,J,Inversion,ecart,Temporaire;
    int Tableau[AZ];
    for(int i=0;i<AZ;i++){
            printf("TAbleau[%d] =: ",i+1);
    scanf("%d",&Tableau[i]);}
    printf("Avant:");

    for(K = 0; K < AZ; K++) printf("%i, ",Tableau[K]);

    Inversion = 0;
    ecart = AZ;
    do {
        ecart >>= 1;
        do {
            Inversion = 0;
            for(I = 0; I <= AZ - ecart - 1; I++) {
                J = I + ecart;
                if(Tableau[J] < Tableau[I]) {
                    Temporaire = Tableau[I];
                    Tableau[I] = Tableau[J];
                    Tableau[J] = Temporaire;
                    Inversion = 1;
                }
            }
        } while (1 == Inversion);
    } while (1 != ecart);

    printf("\nAprès:");
    for(L = 0; L < AZ; L++) {
        printf(", %i",Tableau[L]);
    }
    printf("\n");
    return 0;



}
int main()
{
triparshell();
    return 0;
}

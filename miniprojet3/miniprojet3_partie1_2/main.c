#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50
#define SIZE 50

typedef struct tri {
int tab[1000];

}tri;


/*********Fonction des tries**********/
tri triparselection(){
tri arrr;



    int i,n,ma ,m,pomax;
    int arr[MAX];

        do{
     printf("veuillez taper le dim du tableau : ");
     scanf("%d",&n);
        }while(n>MAX || n<1);


    m=n;
        for(i=0;i<n;i++){
        printf("la valeur de lelement num %d :" ,i+1);
        scanf("%d",&arrr.tab[i]);

        }

        while(n>0){
            ma=arrr.tab[0];
            pomax=0;
        for(i=0;i<n;i++){
        if(arrr.tab[i]>ma){
            ma=arrr.tab[i];
            pomax=i;
        }

    }
    for(i=pomax;i<n;i++){
        arrr.tab[i]=arrr.tab[i+1];
    }
    arrr.tab[n-1]=ma;
    n--;
}
    for(i=0;i<m;i++){
    printf("%7d ",arrr.tab[i]);


}


    return arrr;




}
tri triparinsertion(){
tri arrr;





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

  printf("\n******** tableau tri�e par ordre croissant ********\n");

  for (i=0; i < m; i++)
     printf("%4d", tab[i]);

  return arrr;
}



tri triaubulles(){
tri arrr;



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
    return arrr;



}
tri triparshell(){
tri arrr;


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

    printf("\nApr�s:");
    for(L = 0; L < AZ; L++) {
        printf(", %i",Tableau[L]);
    }
    printf("\n");
    return arrr;



}
int main(){
    int h;

printf("veuillez saisir le nombre correspendant a votre tri:\n1 pour tri par selection\n2 pour tri par insertion\n3 pour tri au bulles\n4 tri par shell\n");
scanf("%d",&h);


tri arr;
switch (h){

case 1  :arr=triparselection();break;
case 2  :arr=triparinsertion();break;
case 3  :arr=triaubulles();break;
case 4  :arr=triparshell();break;
default : printf("nombre incorrect");break;

}
    return 0;
}

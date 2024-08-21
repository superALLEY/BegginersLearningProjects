#include <stdio.h>
#include <stdlib.h>




 typedef struct Etudiant {

   char Nom[50],prenom[50];
   float groupe, moyennne,moyene;


   }Etudiant;
   int triaubulles(Etudiant tab[],int n){


  int i;
float tmp;
  int ech;
  do{ ech=0;
        for(i=0;i<n-1;i++){

            if(tab[i].moyennne<tab[i+1].moyennne){

                tmp=tab[i].moyennne;
                tab[i].moyennne=tab[i+1].moyennne;
                tab[i+1].moyennne=tmp;
                ech++;
            }

        }
  }while(ech>0);
  for (i=0;i<n;i++){
          for(int j=0;j<n;j++){if(tab[i].moyennne==tab[j].moyene){
  printf("%s %s %.2f",tab[j].Nom,tab[j].prenom,tab[i].moyennne);
  printf("\n");}}}

    return 0;



}
void main()

{
    int n;
     Etudiant tableau[1000];
     printf("veuillez saisir le nombre detudiant : ");
     scanf("%d",&n);
     for (int i=0;i<n;i++){
        printf("le nom d etudiant %d :",i+1);
        scanf("%s",&tableau[i].Nom);
        printf("le prenon d etudiant %d :",i+1);
        scanf("%s",&tableau[i].prenom);
        printf("le groupe d etudiant %d :",i+1);
        scanf("%f",&tableau[i].groupe);
        printf("la moyenne etudiant %d:",i+1);
        scanf("%f",&tableau[i].moyennne);
        tableau[i].moyene=tableau[i].moyennne;
        printf("\n");
     }

  triaubulles(tableau,n);
}

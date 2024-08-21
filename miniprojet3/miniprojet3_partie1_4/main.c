#include <stdio.h>
#include <stdlib.h>




 typedef struct Etudiant {

   char Nom[50],prenom[50];
   float groupe, moyennne;


   }Etudiant;
   int triaubulles(Etudiant tab[],int n){


  int i;
float tmp;
  int ech;
  do{ ech=0;
        for(i=0;i<n-1;i++){

            if(tab[i].moyennne>tab[i+1].moyennne){

                tmp=tab[i].moyennne;
                tab[i].moyennne=tab[i+1].moyennne;
                tab[i+1].moyennne=tmp;
                ech++;
            }

        }
  }while(ech>0);
  for (i=0;i<n;i++){

  printf("%s  %.2f",tab[i].Nom,tab[i].moyennne);
  printf("\n");
  }
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
        printf("\n");
     }

  /*triaubulles(tableau,n);*/
  printf("les informations de letudiant ayant la moyenne maximale :");

    int p=0;

    float max=tableau[0].moyennne ;

        for(int i=1;i<n;i++){



                if (tableau[i].moyennne>max){
                        max =tableau[0].moyennne;
                        p=i;

    }}
 printf("%s\t\t%s\t\t%.f\t\t%.2f\t\t\n\n",tableau[p].Nom,tableau[p].prenom,tableau[p].groupe,tableau[p].moyennne);

float k=0;
   for(int i=0;i<n;i++){


k=k+tableau[i].moyennne;



    }
    k=k/n;
     printf(" la moyenne de tous les etudiants : %.2f \n",k);

  printf("Les noms des etudiants admis\n");
    for(int i=0;i<n;i++){



                if (tableau[i].moyennne>10){
                     printf("%s \n",tableau[i].Nom);

    }}
}

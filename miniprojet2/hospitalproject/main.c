#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void enregistrement(char *name,char *lastname,char *service, int *age,float *taille ){

printf("veuillez saisir votre nom\n");
scanf("%[^\n]%*c",&*name);
printf("veuillez saisir votre prenom\n");
scanf("%[^\n]%*c",&*lastname);
printf("veuillez saisir un de ses services\n1 cardiologie \n2 ORL\n3 Pediatrie \n4 Ophtalmologie\nveuillez ecrire le nombre ccorrespondant a votre service ou le nom de service\n");
scanf("%[^\n]%*c",&*service);
printf("veuillez saisir votre age en nombres svp\n");
scanf("%d",&*age);
printf("veuillez saisir votre taille en metres et en nombres svp\n");
scanf("%f",&*taille);
}






char* Diagnostique(char nomm[50],char serviceee[50],int ageee , char *maladie1){



 char oui[4];
    if(strcmp(serviceee,"cardiologie")==0 || strcmp(serviceee,"1")==0 ){
 printf("bonjour Mr/Mm %s dans notre service de cardiologie \n pour commencer , as tu l'un de ses symtomes?\tOUI OU NON\n\n",nomm);
 printf("Céphalées Bourdonnement des oreilles Phosphènes Acouphènes   ?\n");
scanf("%s",oui);
if (strcmp(oui,"OUI")==0 || strcmp(oui,"oui")==0){strcat(maladie1,"hypertension artérielle \n");}
printf("Douleur thoracique Asthénie Angoisse Vomissement ?\n");
scanf("%s",oui);
if (strcmp(oui,"OUI")==0 || strcmp(oui,"oui")==0){strcat(maladie1,"infarctus du myocarde \n");}

printf("Dyspnée Angoisse Douleur thoracique Rales crépitan?\n");
scanf("%s",oui);
if (strcmp(oui,"OUI")==0 || strcmp(oui,"oui")==0){strcat(maladie1,"Oedème aigu du poumon \n");}
printf("Douleur du membre Fièvre Impotence fonctionnelle Myalgies ? \n");
scanf("%s",oui);
if (strcmp(oui,"OUI")==0 || strcmp(oui,"oui")==0){strcat(maladie1,"thrombose veineuse profonde \n ");}


printf("vous avez :\n %s",maladie1);
printf("si tu as d autre symptomes veuillez visiter un autre service\n");
return 0;





    }
    else if(strcmp(serviceee,"ORL")==0 || strcmp(serviceee,"2")==0){
 printf("bonjour Mr/Mm %s dans notre service de ORL \n poutr commencer , as tu l'un de ses symtomes?\tOUI OU NON\n",nomm);
 printf("Otalgie Fièvre Écoulement auriculaire purulent  ?\n");
scanf("%s",oui);
if (strcmp(oui,"OUI")==0 || strcmp(oui,"oui")==0){strcat(maladie1,"Otite Moyenne Aigue\n");}
printf("Dysphagie. Fièvre. Adénopathie sous maxillaire Asthénie ?\n");
scanf("%s",oui);
if (strcmp(oui,"OUI")==0 || strcmp(oui,"oui")==0){strcat(maladie1,"angine bactérienne\n");}

printf("Renflouement Adénopathie cervicale Douleur faciale Épistaxis ?\n");
scanf("%s",oui);
if (strcmp(oui,"OUI")==0 || strcmp(oui,"oui")==0){strcat(maladie1,"cancer du cavum  \n");}
printf("Vésicules péri labiale Prurite pèrilabial Fièvre ? \n");
scanf("%s",oui);
if (strcmp(oui,"OUI")==0 || strcmp(oui,"oui")==0){strcat(maladie1,"herpès labial n ");}


printf("vous avez :\n %s",maladie1);
printf("si tu as d autre symptomes veuillez visiter un autre service\n");
return 0;








    }
    else if((strcmp(serviceee,"pediatrie")==0 || strcmp(serviceee,"3")==0) && ageee<=15){
 printf("bonjour Mr/Mm %s dans notre service de pediatrie  \n pour commencer , as tu l'un de ses symtomes?\tOUI OU NON",nomm);
     printf("Tremblement. Convulsion Morsure de la langue Perte des urines. ?\n");
scanf("%s",oui);
if (strcmp(oui,"OUI")==0 || strcmp(oui,"oui")==0){strcat(maladie1,"épilepsie\n");}
printf("Diarrhée Fièvre Vomissement Douleurs abdominales  ?\n");
scanf("%s",oui);
if (strcmp(oui,"OUI")==0 || strcmp(oui,"oui")==0){strcat(maladie1,"gastro entérite\n");}

printf("Fièvre Vésicules généralisées Prurite Asthénie?\n");
scanf("%s",oui);
if (strcmp(oui,"OUI")==0 || strcmp(oui,"oui")==0){strcat(maladie1,"varicelle  \n");}
printf("Toux. Rales Sibilants. Fièvre Encombrement bronchique.  ? \n");
scanf("%s",oui);
if (strcmp(oui,"OUI")==0 || strcmp(oui,"oui")==0){strcat(maladie1,"bronchiolite\n ");}


printf("vous avez :\n %s",maladie1);
printf("si tu as d autre symptomes veuillez visiter un autre service\n");
return 0;



 }




    else if(strcmp(serviceee,"Ophtalmologie")==0 || strcmp(serviceee,"4")==0){
 printf("bonjour Mr/Mm %s dans notre service de Ophtalmologie  \n pour commencer , as tu l'un de ses symtomes?\tOUI OU NON \n",nomm);
     printf("Larmoirement des yeux Écoulement purulent ophtalmique Photophobie Oeil rouge  ?\n");
scanf("%s",oui);
if (strcmp(oui,"OUI")==0 || strcmp(oui,"oui")==0){strcat(maladie1,"conjonctivite bactérienne \n");}
printf("Douleur oculaire Photophobie ?\n");
scanf("%s",oui);
if (strcmp(oui,"OUI")==0 || strcmp(oui,"oui")==0){strcat(maladie1,"uvéite inflammatoire\n");}

printf("Éruption vésiculeuse Douleur oculaire Prurite Kératite ?\n");
scanf("%s",oui);
if (strcmp(oui,"OUI")==0 || strcmp(oui,"oui")==0){strcat(maladie1,"zona ophtalmique \n");}
printf("Flou Visuel. Oeil rouge Douleur oculaire \n");
scanf("%s",oui);
if (strcmp(oui,"OUI")==0 || strcmp(oui,"oui")==0){strcat(maladie1,"décollement de la rétine \n ");}


printf("vous avez :\n %s",maladie1);
printf("si tu as d autre symptomes n'hesitez pas a visiter un autre service\n");
return 0;}





    else if((strcmp(serviceee,"pediatrie")==0 || strcmp(serviceee,"3")==0)&& ageee>15){
        printf("vous etes des adultes  pour aller au pediatre veuilleze aller a un autre service\n");}





  else{printf("veuillez ressayer et ecrire le nom de service correctemet \n");}




}























int Traitement( char ser[50],char sick[200],char *solution){
    char* aa,bb,cc,dd;
    char ee[]="hypertension",ff[]="infarctus",gg[]="Oedème",hh[]="thrombose";
    /*,ii[]=,jj[]=,kk[]=,ll[]=,mm[]=,nn[]=,ee[]=,ff[]=;*/
if (strcmp(ser,"cardiologie")==0 || strcmp(ser,"1")==0){


aa=strstr(sick,ee);
    if(aa){strcat(solution,"anti hypertensifs \n");}
bb=strstr(sick,ff);
    if(bb){strcat(solution,"anti agrégant plaquettaire. Thrombolytique\n");}
cc=strstr(sick,gg);
    if(cc){strcat(solution,"diurétique, anti hypertensifs \n");}
dd=strstr(sick,hh);
    if(dd){strcat(solution,"Anticoagulants, antalgiques\n");}

}


else if (strcmp(ser,"ORL")==0 || strcmp(ser,"2")==0){
aa=strstr(sick,"Otite Moyenne Aigue");
    if(aa){strcat(solution,"antibiotique, antalgique\n");}
bb=strstr(sick,"angine bactérienne");
    if(bb){strcat(solution,"antibiotique, antalgiques \n");}
cc=strstr(sick,"cancer du cavum ");
    if(cc){strcat(solution,"radiothérapie, chimiothérapie\n");}
dd=strstr(sick,"herpès labial ");
    if(dd){strcat(solution,"antiviral , antiseptique\n");}
}




else if (strcmp(ser,"Pediatrie")==0 || strcmp(ser,"3")==0){
aa=strstr(sick,"épilepsie");
    if(aa){strcat(solution,"anti convulsivants + anti épileptiques\n");}
bb=strstr(sick,"gastro entérite");
    if(bb){strcat(solution,"anti diarrhéique, antipyrétique, anti spasmodiques\n");}
cc=strstr(sick,"varicelle");
    if(cc){strcat(solution,"antipyrétique, antiseptique, antihistaminique\n");}
dd=strstr(sick,"bronchiolite ");
    if(dd){strcat(solution,"antipyrétique, mucolytique, corticoide.\n");}
}



else if(strcmp(ser,"Ophtalmologie")==0 || strcmp(ser,"4")==0){
aa=strstr(sick,"conjonctivite bactérienne");
    if(aa){strcat(solution,"antibiotique, antiseptique\n");}
bb=strstr(sick,"uvéite inflammatoire");
    if(bb){strcat(solution,"anti inflammatoire \n");}
cc=strstr(sick,"zona ophtalmique");
    if(cc){strcat(solution,"antiviral, antiseptique\n");}
dd=strstr(sick,"décollement");
    if(dd){strcat(solution,"laser, antalgique\n");}
}




}


void Ordonnance(char nom[50],char prenom[50],char servicee[50],int agee,char ssss[200],float tail){

if (strcmp(servicee,"ORL")==0 || strcmp(servicee,"cardiologie")==0  || strcmp(servicee,"pediatrie")==0|| strcmp(servicee,"Ophtalmologie")==0 || strcmp(servicee,"1")==0 || strcmp(servicee,"2")==0 || strcmp(servicee,"3")==0 || strcmp(servicee,"4")==0)
           {printf("*\n*\n*\n*\n service %s\n",servicee);
printf("Docteur INOURI Mohamed Ali\n");
printf("patient \t : M.ou Mme %s %s \t %d ans\t\t %.2f m ",nom,prenom,agee,tail);
printf("\n\t\t\t ordonnance \t\n");
printf("d'apres votre diagnostique faut que tu avoir les medicaments suivants \n");
printf("%s\n",ssss);}







}



int main(void)
{
char n[50],l[50],s[50],maladie[200],sss[200];
int a;
float t;
enregistrement(&n,&l,&s,&a,&t);
Diagnostique(n,s,a,&maladie);
Traitement(s,maladie,&sss);
Ordonnance(n,l,s,a,sss,t);


    return 0;

}


































#include <stdio.h>
#include <stdlib.h>
void decToHex(int decNum)
{

    char hexaDeciNum[50];

    int i = 0;
    while (decNum != 0)
    {

        int temp = 0;

        temp = decNum % 16;

        if (temp < 10)
        {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else
        {
            hexaDeciNum[i] = temp + 55;
            i++;
        }
        decNum = decNum / 16;
    }
    printf("0x");

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", hexaDeciNum[j]);
    }
}
int main()
{
    int decNum;

    printf("Enter a decimal number: ");
    scanf("%d", &decNum);

    decToHex(decNum);
    return 0;

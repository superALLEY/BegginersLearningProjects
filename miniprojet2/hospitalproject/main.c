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
 printf("C�phal�es Bourdonnement des oreilles Phosph�nes Acouph�nes   ?\n");
scanf("%s",oui);
if (strcmp(oui,"OUI")==0 || strcmp(oui,"oui")==0){strcat(maladie1,"hypertension art�rielle \n");}
printf("Douleur thoracique Asth�nie Angoisse Vomissement ?\n");
scanf("%s",oui);
if (strcmp(oui,"OUI")==0 || strcmp(oui,"oui")==0){strcat(maladie1,"infarctus du myocarde \n");}

printf("Dyspn�e Angoisse Douleur thoracique Rales cr�pitan?\n");
scanf("%s",oui);
if (strcmp(oui,"OUI")==0 || strcmp(oui,"oui")==0){strcat(maladie1,"Oed�me aigu du poumon \n");}
printf("Douleur du membre Fi�vre Impotence fonctionnelle Myalgies ? \n");
scanf("%s",oui);
if (strcmp(oui,"OUI")==0 || strcmp(oui,"oui")==0){strcat(maladie1,"thrombose veineuse profonde \n ");}


printf("vous avez :\n %s",maladie1);
printf("si tu as d autre symptomes veuillez visiter un autre service\n");
return 0;





    }
    else if(strcmp(serviceee,"ORL")==0 || strcmp(serviceee,"2")==0){
 printf("bonjour Mr/Mm %s dans notre service de ORL \n poutr commencer , as tu l'un de ses symtomes?\tOUI OU NON\n",nomm);
 printf("Otalgie Fi�vre �coulement auriculaire purulent  ?\n");
scanf("%s",oui);
if (strcmp(oui,"OUI")==0 || strcmp(oui,"oui")==0){strcat(maladie1,"Otite Moyenne Aigue\n");}
printf("Dysphagie. Fi�vre. Ad�nopathie sous maxillaire Asth�nie ?\n");
scanf("%s",oui);
if (strcmp(oui,"OUI")==0 || strcmp(oui,"oui")==0){strcat(maladie1,"angine bact�rienne\n");}

printf("Renflouement Ad�nopathie cervicale Douleur faciale �pistaxis ?\n");
scanf("%s",oui);
if (strcmp(oui,"OUI")==0 || strcmp(oui,"oui")==0){strcat(maladie1,"cancer du cavum  \n");}
printf("V�sicules p�ri labiale Prurite p�rilabial Fi�vre ? \n");
scanf("%s",oui);
if (strcmp(oui,"OUI")==0 || strcmp(oui,"oui")==0){strcat(maladie1,"herp�s labial n ");}


printf("vous avez :\n %s",maladie1);
printf("si tu as d autre symptomes veuillez visiter un autre service\n");
return 0;








    }
    else if((strcmp(serviceee,"pediatrie")==0 || strcmp(serviceee,"3")==0) && ageee<=15){
 printf("bonjour Mr/Mm %s dans notre service de pediatrie  \n pour commencer , as tu l'un de ses symtomes?\tOUI OU NON",nomm);
     printf("Tremblement. Convulsion Morsure de la langue Perte des urines. ?\n");
scanf("%s",oui);
if (strcmp(oui,"OUI")==0 || strcmp(oui,"oui")==0){strcat(maladie1,"�pilepsie\n");}
printf("Diarrh�e Fi�vre Vomissement Douleurs abdominales  ?\n");
scanf("%s",oui);
if (strcmp(oui,"OUI")==0 || strcmp(oui,"oui")==0){strcat(maladie1,"gastro ent�rite\n");}

printf("Fi�vre V�sicules g�n�ralis�es Prurite Asth�nie?\n");
scanf("%s",oui);
if (strcmp(oui,"OUI")==0 || strcmp(oui,"oui")==0){strcat(maladie1,"varicelle  \n");}
printf("Toux. Rales Sibilants. Fi�vre Encombrement bronchique.  ? \n");
scanf("%s",oui);
if (strcmp(oui,"OUI")==0 || strcmp(oui,"oui")==0){strcat(maladie1,"bronchiolite\n ");}


printf("vous avez :\n %s",maladie1);
printf("si tu as d autre symptomes veuillez visiter un autre service\n");
return 0;



 }




    else if(strcmp(serviceee,"Ophtalmologie")==0 || strcmp(serviceee,"4")==0){
 printf("bonjour Mr/Mm %s dans notre service de Ophtalmologie  \n pour commencer , as tu l'un de ses symtomes?\tOUI OU NON \n",nomm);
     printf("Larmoirement des yeux �coulement purulent ophtalmique Photophobie Oeil rouge  ?\n");
scanf("%s",oui);
if (strcmp(oui,"OUI")==0 || strcmp(oui,"oui")==0){strcat(maladie1,"conjonctivite bact�rienne \n");}
printf("Douleur oculaire Photophobie ?\n");
scanf("%s",oui);
if (strcmp(oui,"OUI")==0 || strcmp(oui,"oui")==0){strcat(maladie1,"uv�ite inflammatoire\n");}

printf("�ruption v�siculeuse Douleur oculaire Prurite K�ratite ?\n");
scanf("%s",oui);
if (strcmp(oui,"OUI")==0 || strcmp(oui,"oui")==0){strcat(maladie1,"zona ophtalmique \n");}
printf("Flou Visuel. Oeil rouge Douleur oculaire \n");
scanf("%s",oui);
if (strcmp(oui,"OUI")==0 || strcmp(oui,"oui")==0){strcat(maladie1,"d�collement de la r�tine \n ");}


printf("vous avez :\n %s",maladie1);
printf("si tu as d autre symptomes n'hesitez pas a visiter un autre service\n");
return 0;}





    else if((strcmp(serviceee,"pediatrie")==0 || strcmp(serviceee,"3")==0)&& ageee>15){
        printf("vous etes des adultes  pour aller au pediatre veuilleze aller a un autre service\n");}





  else{printf("veuillez ressayer et ecrire le nom de service correctemet \n");}




}























int Traitement( char ser[50],char sick[200],char *solution){
    char* aa,bb,cc,dd;
    char ee[]="hypertension",ff[]="infarctus",gg[]="Oed�me",hh[]="thrombose";
    /*,ii[]=,jj[]=,kk[]=,ll[]=,mm[]=,nn[]=,ee[]=,ff[]=;*/
if (strcmp(ser,"cardiologie")==0 || strcmp(ser,"1")==0){


aa=strstr(sick,ee);
    if(aa){strcat(solution,"anti hypertensifs \n");}
bb=strstr(sick,ff);
    if(bb){strcat(solution,"anti agr�gant plaquettaire. Thrombolytique\n");}
cc=strstr(sick,gg);
    if(cc){strcat(solution,"diur�tique, anti hypertensifs \n");}
dd=strstr(sick,hh);
    if(dd){strcat(solution,"Anticoagulants, antalgiques\n");}

}


else if (strcmp(ser,"ORL")==0 || strcmp(ser,"2")==0){
aa=strstr(sick,"Otite Moyenne Aigue");
    if(aa){strcat(solution,"antibiotique, antalgique\n");}
bb=strstr(sick,"angine bact�rienne");
    if(bb){strcat(solution,"antibiotique, antalgiques \n");}
cc=strstr(sick,"cancer du cavum ");
    if(cc){strcat(solution,"radioth�rapie, chimioth�rapie\n");}
dd=strstr(sick,"herp�s labial ");
    if(dd){strcat(solution,"antiviral , antiseptique\n");}
}




else if (strcmp(ser,"Pediatrie")==0 || strcmp(ser,"3")==0){
aa=strstr(sick,"�pilepsie");
    if(aa){strcat(solution,"anti convulsivants + anti �pileptiques\n");}
bb=strstr(sick,"gastro ent�rite");
    if(bb){strcat(solution,"anti diarrh�ique, antipyr�tique, anti spasmodiques\n");}
cc=strstr(sick,"varicelle");
    if(cc){strcat(solution,"antipyr�tique, antiseptique, antihistaminique\n");}
dd=strstr(sick,"bronchiolite ");
    if(dd){strcat(solution,"antipyr�tique, mucolytique, corticoide.\n");}
}



else if(strcmp(ser,"Ophtalmologie")==0 || strcmp(ser,"4")==0){
aa=strstr(sick,"conjonctivite bact�rienne");
    if(aa){strcat(solution,"antibiotique, antiseptique\n");}
bb=strstr(sick,"uv�ite inflammatoire");
    if(bb){strcat(solution,"anti inflammatoire \n");}
cc=strstr(sick,"zona ophtalmique");
    if(cc){strcat(solution,"antiviral, antiseptique\n");}
dd=strstr(sick,"d�collement");
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

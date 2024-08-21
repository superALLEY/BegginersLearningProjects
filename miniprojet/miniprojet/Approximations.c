#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int pui(int W, int K)
{int L,H=1;

for (L=1;L<=K;L++){
   H=H*W;
}
     return H;


}




int main()
{ int P,c;
float A,B,X,N,Y,Z,D,C,M,E,pi;
    printf("veuillez saisir un nombre tell que\n 1 pour expo \n 2 pour 1/(1-x) \n 3 pour 1/(1-x)^2 \n 4 pour 1/(1-x)^3 \n 5 pour ln(x+1) \n 6 pour ln(1-x) \n 7 pour pi \n 8 pour cos(x) \n 9 pour sin(x)\n ");
   do {
    scanf("\n%d",&P);}
while(P<=0);



switch (P)

  {

    case 1:


   do{  printf(" \n expo\n la valeure de N doit etre entre 0 et 50    \n veuillez saisir la valeure de N et X\n");
    scanf("%f%f",&N,&X);
   } while(N<0 || N>50);

   Z=1;
   C=0;
   A=0;
   while(C<N){

   for (B=0;B<N;B++  )
{

    Y=pui(X,B);


    if(B==0){B=1;
    Z=B*Z;

    B=0;
    }else{Z=B*Z;

    }
     D=Y/Z;
     A=A+D;
     C=C+1;
}
printf("\nla valeur aproximit� de expononentielle de %.2f est :%.2f",X,A);

   }
  ;break;




    case 2 :


   do{  printf("\n1/(1-x) \nla valeure de N doit etre entre 0 et 50 et la valeure de X entre -1 et 1\n veuillez saisir la valeure de N et X\n");
    scanf("%f%f",&N,&X);
   } while(N<0  || N>50 || X<=-1 || X>=1);



   A=0;


   for (B=0;B<N;B++  ){
                Y=pow(X,B);

                A=A+Y;

    }


printf("\nla valeur aproximit� de 1/(1-%.2f) est :%.2f",X,A);; break;

    case 3 : do{  printf("\n 1/(1-X)^2\nla valeure de N doit etre entre 0 et 50 et la valeure de X entre -1 et 1\n \nveuillez saisir la valeure de N et X\n");
    scanf("%f%f",&N,&X);
   } while(N<0  || N>50 || X<=-1 || X>=1);



   A=0;


   for (B=1;B<N;B++  ){
                Y=pow(X,B-1)*B;

                A=A+Y;

    }


printf(" \n la valeur aproximit� de 1/(1-%.2f)^2 est :%.2f",X,A);



; break;

    case 4:    do{  printf("\n1/(1-x)^3 \nla valeure de N doit etre entre 0 et 50 et la valeure de X entre -1 et 1\n veuillez saisir la valeure de N et X\n");
    scanf("%f%f",&N,&X);
   } while(N<0  || N>50 || X<=-1 || X>=1);



   A=0;


   for (B=2;B<N;B++  ){
                Y=pow(X,B-2)*(((B-1)*B)/2);

                A=A+Y;

    }


printf("\nla valeur aproximit� de 1/(1-%.2f)^3 est :%.2f",X,A);




; break;

    case 5:
   do{  printf("\nln(1+x)\nla valeure de N doit etre entre 0 et 50 et la valeure de X entre -1 et 1\nveuillez saisir la valeure de N et X\n");
    scanf("%f%f",&N,&X);
   } while(N<0 || X<=-1 || N>50 || X>1);



   A=0;


   for (B=1;B<N;B++  ){
                Y=pow(X,B);
                D=(Y/B);
                C=pow(-1,B+1);
                Z=D*C;
                A=A+Z;

    }


printf("\nla valeur aproximit� de ln(1 plus %.2f) est :%.2f",X,A);



;break;

    case 6:    do{  printf(" \ln(1-x) \nla valeure de N doit etre entre 0 et 50 et la valeure de X entre 0 et 1\n veuillez saisir la valeure de N et X\n");
    scanf("%f%f",&N,&X);
   } while(N<0 || N>50 || X>1);


   C=0;
   A=0;


   for (B=1;B<N;B++  )
{

    Y=pow(X,B);
            D=Y/B;
            A=A+D;


}







A=-A;
printf("\nla valeur aproximit� de ln(1 moins %.2f) est :%.2f",X,A);

;break;

    case 7:
   do{  printf("\n pi \n veuillez saisir la valeure de N pour pi\n");
    scanf("%f",&N);
   } while(N<0);



   A=0;


   for (B=0;B<=N-1;B++){
               Y=(1/(1+(B*2)))*pow(-1,B);

                A=A+Y;

    }
pi=4*A;

printf("\nla valeur aproximit� de pi est :%.6f",pi);


;break;

    case 8:    do{  printf("\ncos(x)\nla valeure de N doit etre  etre 1 et 10 et X entre -360 et 360\nveuillez saisir la valeure de N et X\n");
    scanf("%f%f",&N,&X);
   } while(N<0 || N>10  || X>360 || X<-360);



   A=0;
X=X*(3.14/180);

   for (B=0;B<N;B++) {   Z=1;

    Y=pow(-1,B);
    M=pow(X,2*B);

    if(B==0){Z=1;}else{
    for (E=1;E<=2*B;E++){

        Z=Z*E;
    }
    }


    D=(Y/Z)*M;
     A=A+D;


}printf("la valeur aproximit� de Cos de %.2f est :%.2f",X,A);

;break;

    case 9:    do{  printf("\nsin(x)\n la valeure de N doit etre  etre 1 et 10 et X entre -360 et 360\n veuillez saisir la valeure de N et X\n");
    scanf("%f%f",&N,&X);
   }  while(N<0 || N>10  || X>360 || X<-360);




   A=0;

X=X*(3.14/180);
   for (B=0;B<N;B++) {   Z=1;

    Y=pow(-1,B);
    M=pow(X,2*B+1);


    for (E=1;E<=2*B+1;E++){

        Z=Z*E;
    }



    D=(Y/Z)*M;
     A=A+D;


}printf("\nla valeur aproximit� de sin de %.2f est :%.2f",X,A);
;break;

    default : printf("\n invalid option your number should be  between 1 & 9");

   }








    return 0;
}

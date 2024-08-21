#include <stdio.h>
#include <stdlib.h>

int main()
{float  A,B,X,N,Y,Z,D,C;


   do{  printf("veuillez saisir la valeure de N et X\n");
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


printf("\nla valeur aproximité de ln(1 plus %.2f) est :%.2f",X,A);






    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{float  A,B,X,N,Y,Z,D,C,pi;


   do{  printf("veuillez saisir la valeure de N pour pi\n");
    scanf("%f",&N);
   } while(N<0);



   A=0;


   for (B=0;B<=N-1;B++){
               Y=(1/(1+(B*2)))*pow(-1,B);

                A=A+Y;

    }
pi=4*A;

printf("\nla valeur aproximité de pi est :%.6f",pi);





    return 0;
}


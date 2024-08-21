#include <stdio.h>
#include <stdlib.h>

int main()
{float  A,B,X,N,Y,Z,D,C;


   do{  printf("veuillez saisir la valeure de N et X\n");
    scanf("%f%f",&N,&X);
   } while(N<0 || N>50);

   Z=1;
   C=0;
   A=0;
   while(C<N){

   for (B=0;B<N;B++  )
{

    Y=pow(X,B);


    if(B==0){B=1;
    Z=B*Z;

    B=0;
    }else{Z=B*Z;

    }
     D=Y/Z;
     A=A+D;
     C=C+1;
}
printf("\nla valeur aproximité de expononentielle de %.2f est :%.2f",X,A);

   }







    return 0;
}

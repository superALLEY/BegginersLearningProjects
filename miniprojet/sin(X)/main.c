#include <stdio.h>
#include <stdlib.h>

int main()
{float  A,B,X,N,Y,Z,D,C,M,E;


   do{  printf("veuillez saisir la valeure de N et X\n");
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


}printf("\nla valeur aproximité de sin de %.2f est :%.2f",X,A);



    return 0;
}

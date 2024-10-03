#include <locale.h>
#include <stdio.h>
#include <math.h>
void main(){
    float A[20] ;
    int I , N ;
    float X ,P ;
    setlocale(LC_CTYPE,"") ;
    printf("Entrer le Degré N Du Polynome (max = 20)")  ;
    scanf("%d",&N) ;
    printf("donner la valeur de X de L'argument ") ;
    scanf("%f",&X) ;
    for ( I = 0  ; I < N ; I++) {
        printf("Ennter Le coefficicient A%d : " , I) ;
        scanf("%f",&A[I]) ;

    }
    /*Calcul a L'aide de Pow*/
    for (P = 0.0 , I= 0 ; I< N ; I++){
        P+= A[I] * pow(X,I) ;
    }
    printf("Valeur Du Polynome pour X = %.2f : %.2f \n",X,P) ;

    printf("P(X) = ") ;

    printf("%5.2fX^%d ",A[0],I) ;
    for ( I = 1  ; I < N ; I++) {
        printf(" + %5.2fX^%d ",A[I],I) ;

    }
    printf("\nP(x) = %.2f",P) ;

    /*Caclul a l'aide de horner
    for (P = 0.0 , I= 0 ; I< N ; I++){
        P=  P * X * A[I] ;
    }
    //Edition de la resultat
    printf("Valeur Du Polynome pour X = %.2f : %.2f \n",X,P) ;*/



}

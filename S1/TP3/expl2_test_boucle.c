#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main1(){
    int compteur = 0 ;
    while (compteur < 10) {
            printf("La Variable compteur vaut %d\n",compteur) ;
            compteur++ ;


    }
}
// next
void main2(){
    int S ,i , signe , N ;
    S = 0 ;
    i = 0 ;
    signe = - 1 ;
    printf("donner un entier N Posifit : \n") ;
    scanf("%d",&N) ;
    while (i<=N){
        S=S+signe*i*i ;
        i++ ; i ++ ;
        signe = - signe ;
        printf("La somme est %d  \n " , S) ;
    }

}
void main3(){
    while(1){
        printf("Devinnez ce que je fait !! \a \n") ;
    }
}
int main4(void){
    for(int i = 0 ; i <= 1000 ; ++i){
        for (int j = i ; j<=1000 ; ++j){
            if (i*j==1000){
            printf("%d * %d = 1000 \n",i,j) ;
            }
        }
    }
    return 0 ;
}

int main5(void){
    unsigned int a = 46 ;
    unsigned int b= 42 ;
    unsigned int reste = a % b ;
    while (reste != 0) {
        a= b ;
        b = reste ;
        reste = a % b
    }
    printf("%d",b);
    return 0
}
int main6(int argc , char ** argv ){
    int nombreADeviner = 0 , nombreEntre = 0 ;
    const int MAX = 100 , MIN = 1 ;
    srand(time(NULL)) ;
    nombreADeviner = (rand() % (MAX-MIN+ 1)) + MIN ;
    do {
        printf("Quel est le nombre ? : \n") ;
        scanf("%d",&nombreEntre) ;
        if(nombreADeviner > nombreEntre)
            printf("C'est plus ! \n\n") ;
        else if (nombreADeviner < nombreEntre)
            printf("C'est moins ! \n\n") ;
        else
            printf("Bravo , voues avez trouve le nombre z deviner !!! \n\n") ;

    } while (nombreADeviner != nombreEntre) ;
    return 0


}




#include <stdio.h>
int main(){
	printf("*****Hello ISET T.I 1.1 Premier Test ***** \n") ;
	int nbTouches = 108 ;
	int sansFil = 0 ; 
	int n = (sansFil || nbTouches >= 108) ? 20 : 30 ;
	printf("Premiere Valeur de n %d \n",n) ;
	n = (n == 20 && !(nbTouches <= 108)) ? 40 : 50 ;
	printf("Deixieme Valuer de n %d \n",n) ; 
	return 0 ;
}

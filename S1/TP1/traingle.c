#include <stdio.h>
int main(){
	
	float Longe , Larg ;
	printf("Donner le Longeur de triangle \n") ;
	scanf("%f" , &Longe) ;
	printf("Donner le Largeur de triangle \n ") ;
	scanf("%f",&Larg) ;
	printf("L'aire de Triagle est %f cm2 \n",Longe * Larg ) ;
	printf("Le permitere  de Triagle est %f cm",(Longe + Larg) * 2 ) ;
	
	return 0 ;
}

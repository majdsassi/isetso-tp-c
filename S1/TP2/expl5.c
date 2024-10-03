#include <locale.h>
#include <stdio.h>
void main(){
    int x = 2;
    float r = 3.57;
    char a = 'm' ;
    char ch[10] = "fleur" ;
    int b =  0 ;
    setlocale(LC_CTYPE,"") ;
    printf("\n La Valuer De x qui est entier est %d",x) ;
    printf("\n La Valuer De r qui est reél est %f",r) ;
    printf("\n La Valuer De c qui est caratere est %c",x) ;
    printf("\n La Valuer De ch qui est une chaine de caraterer est %s",ch) ;
    printf("\n La Valuer De b qui est logique  est %d",x) ;




}

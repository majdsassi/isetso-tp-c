#include <stdio.h>
#include <locale.h>


int main() {
    printf("*****Hello ISET T.I 1.1 Premier Test ***** \n") ;
    int i = 15/2 ;
    printf("Valeur de i %d \n" , i) ;
    setlocale(LC_CTYPE,"") ;
    switch (i){
        case 1 : printf("Automne \t") ;  break ;
        case 2 : printf("Hiver \t")  ;  break;
        case 3 : printf("Printemps \t") ; break ;
        case 4 : printf("Eté \t") ; break ;
        default : printf("Error \t") ;
    }

    return 0;
}

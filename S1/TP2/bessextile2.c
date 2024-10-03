#include <stdio.h>
#include <locale.h>
int main() {
    int a = 0;
    setlocale(LC_CTYPE,"") ;
    printf("Donner l'année : ");
    scanf("%d", &a);

    while (a < 0) {
        printf("Donner l'année : \n");
        scanf("%d", &a);
    }
    if (a%400==0 || a % 4 == 0 && a % 100 !=  0){
        printf("%d est une année bissextile.\n", a);
    }
    else{
        printf("%d n'est une année bissextile.\n", a);
    }
    return 0 ;

}

#include <stdio.h>
#include <stdlib.h>


int main (int argc, char*argv[]){

int a, b;

printf("Pourrais-je avoir un nombre? ");
scanf("%d", &a);

printf("Pourrais-je avoir un autre nombre? ");
scanf("%d", &b);

if (a == b)
{
    printf("Les nombres %d et %d sont egaux\n",a,b);
    
}else if(a < b) {
    printf("Le nombre %d est inferieur a %d\n", a,b);
}else if(a > b){
    printf("Le nombre %d est superieur a %d\n", a,b);
}else
{
   printf("Caracteres incorrects");
}


}
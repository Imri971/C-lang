#include <stdio.h>
#include <stdlib.h>

int main (int argc, char*argv[]){
    int sum;
    const char a[100];
    const char b[100];
    
   
    printf("Donne moi un nombre ");
    scanf("%f", &a);

    printf("Donne un autre frerot ");
    scanf("%f", &b);

    sum = atoi(a) + atoi(b);
    
   printf ("Le resultat de %2.2f + %2.2f est %3.2f\n", atoi(a), atoi(b), sum);

}
#include <stdio.h>


int main (int argc, char*argv[]){
    float sum;
    float a;
    float b;
    
   
    printf("Donne moi un nombre ");
    scanf("%f", &a);

    printf("Donne un autre frerot ");
    scanf("%f", &b);

    sum = a + b;
    
   printf ("Le resultat de %2.2f + %2.2f est %3.2f\n", a, b, sum);

}
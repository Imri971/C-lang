#include <stdio.h>
#include <stdlib.h>

int main (int argc, char*argv[]){

    int i;

    for ( i = 1; i < argc; i++)
    {
      //  printf("%d\n", i);
        printf("%s\n", argv[i]); 
      

     int x ;
     x = atoi(argv[i]); //convertit le ième élément de argv en valeur numérique
     
        if(x == 5){
            printf("est egal a 5\n");

        } else if(x < 5){
            printf("est inferieur a 5\n");

        }else if (x > 5){
            printf("est superieur a 5\n");
        } 
    }
    return 0;
    
 } 
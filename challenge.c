#include <stdio.h>
#include <stdlib.h>

int main (int argc, char*argv[]){

    int i;

    for ( i = 1; i < argc; i++)
    {
      //  printf("%d\n", i);
        printf("%s\n", argv[i]); 
     }   
     /*
        if(argc == 5){
            printf("%d est egal a 5\n",argc);
        }else if(argc < 5){
            printf("%d est inferieur a 5\n",argc);
        }else {
            printf("%d est superieur a 5\n", argc);
        } */
   
    



    return 0;
}
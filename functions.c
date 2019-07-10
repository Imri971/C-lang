#include <stdio.h>
#include <stdlib.h>

int multiple (int a, int b)
{
    int c = a*b;
    return c;
}

int main (int argc, char*argv[]){
    printf("Hello World!\n");
    int nb1 , nb2 ;
    printf("Entrez un nombre: ");
    scanf("%d",&nb1);

    printf("Entrez un autre nombre: ");
    scanf("%d", &nb2);

    int multiplication = multiple(nb1, nb2);
    printf(" = %d\n",multiplication);
    
    return 0;
}


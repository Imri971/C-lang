// COMMANDE TERMINAL: gcc -o bin/functions functions.c && bin/functions
#include <stdio.h>
#include <stdlib.h>

int multiple (int a, int b)
{
    int c = a*b;
    return c;
}
//**************************
void Bonjour(char* hello){
    printf("%s", hello);
}

//***********FCT CARRE***************
int square (int a)
{
    int square = a * a;
    return square;
}
//*********************************FCTS PLUS GRAND NOMBRE SUR 2********************************************
int Max_2(int a, int b)
{
    if ( a > b)
    {
        return a;
    }else if( a < b)
    {
        return b;
    }
}
//**********************************FCT PLUS GRAND NOMBRE SUR 4******************************************
int Max_4(int a, int b, int c, int d){
    int max1= Max_2(a,b);
    int max2= Max_2(c,d);
    if (max1 > max2)
    {
     return max1;

    } else if(max1 < max2){

        return max2;
    }
  
    
}
//**********************************FCT FACTORIELLE******************************************
int fact(int a){
    int i, resultat;
    resultat = 1;
        for (i=2;i<=a;i++)

        {
           resultat = resultat*i; 
        }
        return resultat;
        
    }
//************************************FCT MODULO*****************************************
int displayEven(int a){ 

    for ( int i = a; i >= 0 ; i--){
        if (i % 2 == 0){
            printf("Le nombre est %d est pair\n", i);
        }
        
    }
}

//*************************************** MAIN *************************************************
int main (int argc, char*argv[]){
    printf("Hello World!\n");

//************************************* MULTIPLICATION *****************************************
    int nb1 , nb2 ;
    printf("Entrez un nombre pour une multiplication: ");
    scanf("%d",&nb1);

    printf("Entrez un autre nombre: ");
    scanf("%d", &nb2);

    int multiplication = multiple(nb1, nb2);
    printf(" = %d\n",multiplication);
    
  //************************************************************************************** 
   char hello[] = " BONJOUR\n";
   Bonjour(hello);
//*************************************** CARRE DE NOMBRE ***********************************
    int nb3;
   printf("Nous allons trouver le carré d'un nombre maintenant, donne moi un nombre: ");
   scanf("%d", &nb3);

   int carre= square(nb3);
   printf("Le carre de %d est %d.\n", nb3, carre);


   //**************************************** PLUS GRAND NOMBRE SUR 2 ************************
    int nb4, nb5;
    printf("Nous allons voir quel nombre est le plus grand. Entre un nombre: ");
    scanf("%d", &nb4);
    printf("Entre un nouveau nombre: ");
    scanf("%d", &nb5);

    int Big = Max_2(nb4,nb5);
    printf("Le plus grand nombre entre %d et %d est %d\n", nb4,nb5,Big);
//*********************************** FACTORIELLE *********************************************
     int nb6;
        printf("Entre un nombre pour calculer sa factorielle: \n");
        scanf("%d",&nb6);
        int facto= fact(nb6);
        printf("La factorielle de %d est %d \n",nb6,facto);

//**************************************** Modulo ********************************************
    int nb8;
    printf("Entre un nombre pour modulo: ");
        scanf("%d", &nb8);
        int display = displayEven(nb8);
        
        
//********************************** PLUS GRAND NOMBRE SUR 4**********************************
    int nb10,nb11,nb12,nb13;
    printf("Nous allons voir quel nombre est le plus grand de 4. Entre un nombre: ");
    scanf("%d", &nb10);
    printf(", un second nombre: ");
    scanf("%d", &nb11);
    printf(", un troisième nombre: ");
    scanf("%d", &nb12);
    printf("et un quatrième nombre: ");
    scanf("%d", &nb13);

    int verybig= Max_4(nb10,nb11,nb12,nb13);
    printf("Le nombre le plus grand entre %d - %d - %d - %d est: %d \n",nb10,nb11,nb12,nb13, verybig);


    return 0;
}




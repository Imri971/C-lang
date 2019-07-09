#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char*argv[]){
    int cb = 0;
    int cash = 0;

    if (cb || cash)
    {
        printf("Yes you can go\n");
    }else
    {
       printf("STOP you can't pay\n");
    }
    

    int elecIsOff= 1;
    int waterIsOff = 1;

    if (elecIsOff && waterIsOff)
    {
        printf("Yes you can go\n");
    }else if(elecIsOff && !waterIsOff){
        printf("You need to cut the water\n");
    }else if(waterIsOff && !elecIsOff){
        printf("You need to switch off the electricity\n");
    }
    
    else
    {
       printf("STOP water or electricity are still open\n");
    }

    return 0;

}

 
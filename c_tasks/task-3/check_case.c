#include<stdio.h>
#include "fawzy_man.h"

int main(){
    char c;
scanf("%c",&c);
int asci=c;
    if (asci>=65 &&asci<=90)
    {
        printf("upper");
    }
    else if (asci>=97 &&asci<=122)
    {
        printf("lower");
    }
    else 
    {
        printf("not a letter");
    }
    
}
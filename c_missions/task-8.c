#include<stdio.h>
#include "fawzy_man.h"

int main(){
for (int i = 0; i <= 9; i++)
{
    for ( int j = 0; j <=9 ; j++)
    {
      int k=i*j;
       if(k<10)
       {
        my_putchar(k+'0');
        my_putchar(' ');
        my_putchar(',');
       }
      else{
        int x=k%10;
        k=k/10;
        my_putchar(k+'0');
        my_putchar(x+'0');
        my_putchar(' ');
        my_putchar(',');
      } 
      
    }
    my_putchar('\n');
}


}
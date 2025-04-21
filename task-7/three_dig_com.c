#include<stdio.h>
#include "fawzy_man.h"
int main(){

    for ( int i = 0; i <= 9; i++)
    {
        for (int j = i+1; j <= 9; j++)
        {
            for (int k = j+1; k <= 9; k++)
            {
                if (i==j ||i==k ||j==k)
            {
                continue;
            }
            my_putchar(i+'0');
            my_putchar(j+'0');
            my_putchar(k+'0');
            my_putchar(',');
            }
            
            
        }
        
    }
    
}
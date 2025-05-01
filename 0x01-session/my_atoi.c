#include "fawzy.h"



int my_atoi(char *c)
{
int result=0;
int sign=0;
    for (int i = 0; c[i] != '\0'; i++)
    {
        if (c[i] == ' ')
            continue;
        
        int asci = c[i];
       
        
        
        
        if ((asci >= 48 && asci <= 57) )
         
            result = result * 10 + (c[i] - '0');
        
     else if (asci==45)
        sign++;
     else if (asci==43){

     }

     else
     if (sign%2==0)
        return result + 0;
     
     else
        return -result + 0;
    
      
      
     
    }
   
    if (sign%2==0)
    return result ;
else
return -result;
        
   
}
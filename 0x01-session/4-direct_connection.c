#include<stdio.h>

int main(){
    int signal=98;
    int *ptr =&signal;
    printf("the address is :%p\n",ptr);
    printf("the value is :%d\n",*ptr);


}
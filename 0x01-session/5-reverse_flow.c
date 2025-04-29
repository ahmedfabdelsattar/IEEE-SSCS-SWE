#include<stdio.h>

void swap(int *a,int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}

int main(){
int a=5,b=12;
printf("a=%d and b=%d\n",a,b);
swap(&a,&b);
printf("a=%d and b=%d\n",a,b);

}
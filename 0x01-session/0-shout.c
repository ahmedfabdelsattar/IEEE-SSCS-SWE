#include<stdio.h>

void repeat_message(int n){
    for (int i = 1; i <=n; i++)
    {
     
        printf("%d: Hello,world.\n",i);
      
    }
    
}

int main(){
    int n=0;
    printf("please enter the number of times:\n");
    scanf("%d",&n);
    repeat_message(n);
}
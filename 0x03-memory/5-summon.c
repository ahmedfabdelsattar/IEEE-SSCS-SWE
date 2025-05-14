#include<stdio.h>
#include <stdlib.h>

int *summon_allies(int *allies, int n){
    allies=(int*)malloc(sizeof(int)* n);
    if (allies==NULL)
    {
        printf("memory allocation failed");
        return NULL;
    }
    else{
      for (int i = 0; i < n; i++)
      {
        int x=0;
        printf("Enter allie[%d]: ",i);
        scanf("%d",&x);
        allies[i]=x;
      }
      return allies;
      
    }
}

int main(){
int *allies;
int n=0;
printf("Enter number of allies: ");
scanf("%d",&n);

allies=summon_allies(allies, n);
 for (int i = 0; i < n; i++) {
            printf("%d ", allies[i]);
        }
}
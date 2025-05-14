#include<stdio.h>
#include<stdlib.h>
void *clear_allocation(int count, int size){
    void *arr=(int *)malloc(size*count );
      if (arr == NULL) {
        return NULL; 
    }
   for (int i = 0; i < count ; i++) {
       ((int *)arr)[i] = 0;

    }
      return arr;
}
int main(){
    int count=20;
    int size=4;
    int *arr=(int *)clear_allocation(count,size);
     if (arr == NULL) {
        printf("Memory allocation failed.\n");
    }
    for (int i = 0; i < count ; i++)
    {
         printf("%d\n",arr[i]);
    }
}
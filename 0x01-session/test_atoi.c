#include <stdio.h>
#include "fawzy.h"

int main(){
    char x[] ="    123+=+123ab";
    int num=my_atoi(x);
    printf("%d\n",num);
}
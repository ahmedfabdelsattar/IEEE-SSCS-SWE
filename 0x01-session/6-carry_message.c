#include<stdio.h>
#include<string.h>

void print_message(char msg[]){
printf("%s\n",msg);

}
int main(){
    char msg[]="hello world";

  print_message(msg);
}
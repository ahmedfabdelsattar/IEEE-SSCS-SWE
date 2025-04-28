#include<stdio.h>

int is_response_detected(int strength){

    if (strength>50)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}
int main(){
    int strength=0;
    scanf("%d",&strength);
   int signal= is_response_detected(strength);
   if (signal==1){
    printf("signal detected");
   }
   else{
    printf("signal not detected");
   }

}
#include <stdio.h>

struct being
{
    char *name;
    int age;
    float energy_level;
};

void print_being(struct being *element){
printf("Name:{%s},",element->name);
printf("Age:{%d}",element->age);
printf("Energy level{%0.2f},",element->energy_level);

}
int main(){

    struct being data=
    {
        "ahmed",
        21,
        87.7
    };
    print_being(&data);
}
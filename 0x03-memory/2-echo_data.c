#include <stdio.h>
void echo_data(void *data, int size)
{
    if (size == sizeof(short int))
    {
        printf("%i\n", *(short int *)data);
    }
    else if (size == sizeof(char))
    {
        printf("%c\n", *(char *)data);
    }
    else if (size == sizeof(float))
    {
        printf("%.2f\n", *(float *)data);
    }
    else if (size == sizeof(long int))
    {
        printf("%ld\n", *(long int *)data);
    }
    else
    {
        printf("unknown type\n");
    }
}

int main()
{

    void *ptr1;
    void *ptr2;
    void *ptr3;
    void *ptr4;
    short int data1 = 55;
    float data2 = 3.7;
    char data3 = 'y';
    long int data4 = 89;
    int size1 = sizeof(data1);
    int size2 = sizeof(data2);
    int size3 = sizeof(data3);
    int size4 = sizeof(data4);
    ptr1 = &data1;
    ptr2 = &data2;
    ptr3 = &data3;
    ptr4 = &data4;
    echo_data(ptr1, size1);
    echo_data(ptr2, size2);
    echo_data(ptr3, size3);
    echo_data(ptr4, size4);
}
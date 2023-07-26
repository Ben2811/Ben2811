#include <stdio.h>
template <typename T>
void swap(T &a, T &b)
{
    T temp;
    temp =a;
    a=b;
    b=temp;
}
int main ()
{
    int a_int=10,b_int=12;
    swap(a_int,b_int);
    printf("Gia tri (a)= [%d], (b)=[%d]\n",a_int,b_int);
    float a_float=10.5, b_float=12.5;
    swap(a_float,b_float);
    printf("Gia tri (a)= [%.3f], (b)=[%.3f]\n",a_float,b_float);
}
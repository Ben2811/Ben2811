#include <stdio.h>
int main ()
{
    int a=10;
    int* a_ptr;
    a_ptr=&a;
    int* p;
    p=new int;
    *p=10;
    printf("Dia chi cua bien con tro a_ptr:[%p]\n",&a_ptr);
    printf("Dia chi bo nho ma con tro a_ptr tro den : [%p]\n",a_ptr);
    printf("Dia chi cua bien (a) : [%p]\n",&a);
    printf("Gia tri bien a = [%d]\n",a);
    printf("Gia tri cua bien (a) truy cap thong qua con tro [%d]\n",*a_ptr);
    *a_ptr=100;
    printf("\n Sau khi thay doi : \n");
    printf("Gia tri bien a = [%d]\n",a);
    printf("Gia tri cua bien (a) truy cap thong qua con tro [%d]\n",*a_ptr);

    printf("\nDia chi bo nho ma con tro p tro den : [%d]\n",*p);
    printf("Dia chi cua bien con tro a_ptr:[%p]\n",&p);
    delete p;   
    printf("\nDia chi bo nho ma con tro p tro den : [%d]\n",*p);
    return 0;
}
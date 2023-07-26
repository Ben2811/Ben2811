#include <stdio.h>
int Recursion(int a , int b)
{
    if(a*b==0)
    {
        return a+b;
        
    }
    else
    {
        return Recursion(b,a%b);
    }
}
int main()
{
    int a,b;
    printf("Nhap a va b ");
    scanf("%d %d",&a,&b);
    printf("Bieu Dien nhi phan cua so (a) = [%d]",   Recursion(a,b));
    return 0;
}
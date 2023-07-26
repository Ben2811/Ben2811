#include <stdio.h>
int Recursion(int n)
{
    if (n==1)
    {
        return 1;
    }
    else
    {
        return n*Recursion(n-1);
    }
}
int main()
{
    int n;
    printf("Nhap n \n");
    scanf("%d",&n);
    printf("n!=%d",Recursion(n));
    return 0;
}
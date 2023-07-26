#include <stdio.h>
int Recursion(int n, int a , int r)
{
    if(n==1)
    {
        return a;
    }
    else
    {
        return r+Recursion(n-1, a, r);
    }
}
int main()
{
    int n,a,r;
    printf("Nhap n ");
    scanf("%d",&n);
    printf("Nhap a ");
    scanf("%d",&a);
    printf("Nhap cong sai r ");
    scanf("%d",&r);
    printf("cap so cong cua so (n)=%d ",Recursion(n,a,r));
    return 0;
}
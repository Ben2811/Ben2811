#include <stdio.h>
int Recursion(int n)
{
    if(n==0)
    {
        return 0;
    }
    else   
    {
        return n+Recursion(n-1);
    }
}
int Tongsole(int n)
{
    if(n==1) return 1;
    return n+Tongsole(n-2);
}
int TinhTongle(int n)
{
    if(n%2==0)
    {
        return Tongsole(n-1);
    }
    else
    {
        return Tongsole(n);
    }
}
int main()
{
    int n;
    printf("Nhap n ");
    scanf("%d",&n);
    printf("Tong  (n) = [%d]",Recursion(n));
    printf("\nTong so le  (n) = [%d]",TinhTongle(n));
    return 0;
}
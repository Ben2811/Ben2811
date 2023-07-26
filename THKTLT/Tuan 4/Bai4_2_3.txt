#include <stdio.h>
int Uscln(int n, int m)
{
    if(m==0)
        return n;
    if(n%m==0)
    {
        return m;
    }
    return Uscln(n,m%n);
}
int BCNN(int n, int m)
{
    int r=Uscln(n,m);
    return n*m/r;
}
int main ()
{
    int n,m,r;
    printf("Nhap n ");
    scanf("%d",&n);
    printf("Nhap m ");
    scanf("%d",&m);
    printf("USCLN cua n va m la %d",Uscln(n,m));
    printf("\nBSCNN cua n va m la %d",BCNN(n,m));
}
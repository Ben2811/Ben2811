#include <stdio.h>
#include <math.h>
void nhapmangcontro(int *a, int n, int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("A[%d,%d]",i,j);
            int k=i*m+j;
            scanf("%d",&(*(a+k)));
        }
    }
}
void xuatmangcontro (int *a, int n, int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int k=i*m+j;
            printf("%4d",(*(a+k)));
        }
        printf("\n");
    }
}
int main ()
{
    int n,m;
    int *a;
    a=new int[10000];
    printf("Nhap kich thuong ma tran ");
    scanf("%d%d",&n,&m);
    nhapmangcontro(a,n,m);
    xuatmangcontro(a,n,m);
    delete []a;
    return 0;
}
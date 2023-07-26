#include <stdio.h>
void nhapmangcontro(int *a, int n)
{
    for(int i=0;i<n;i++)
    {
        printf("A[%d]= ",i);
        scanf("%d",&(*(a+i)));
    }
}
void xuatmangcontro (int *a, int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(a+i));
        printf("\n");
    }
    printf("\n");
}
int main ()
{
    int n;
    int *a;
    a=new int[100];
    printf("Nhap n ");
    scanf("%d",&n);
    nhapmangcontro(a,n);
    xuatmangcontro(a,n);
    delete []a;
    a=new int[200];
    return 0;
}

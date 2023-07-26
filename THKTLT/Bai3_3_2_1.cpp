#include <stdio.h>
void nhapmang(int *a, int n)
{
    for(int i=0; i<n;i++)
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
void tongmang(int *a, int n)
{
    int tong=0;
    for(int i=0;i<n;i++)
    {
        tong= tong+(*(a+i));
    }
    printf("Tong la %d",tong);
}  
int main()
{
    int n;
    int *a;
    a=new int[100];
    do
    {
        printf("Nhap n ");
        scanf("%d",&n);
    } while (n<0 || n>100);

    nhapmang(a,n);
    xuatmangcontro(a,n);
    tongmang(a,n);
    delete []a;
    return 0;
}
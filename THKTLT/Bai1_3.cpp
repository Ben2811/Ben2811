#include <stdio.h>
#define Max 100
void Nhapn(int &n)
{
    do
    {
        printf("Nhap n ");
        scanf("%d",&n);
    }while(n<=0||n>100);
}
void Nhapmang(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
}
void Xuatmang(int a[],int n)
{
    printf("\nMang gom cac phan tu\n");
    for(int i=0;i<n;i++)
    {
        printf("%5d",a[i]);
    }
}
void VTDDT(int a[],int n)
{
    for (int i=0;i<n;i++)
	{
		if(a[i]>0)
        {
            printf("\nPhan tu duong dau tien %d",a[i]);
            break;
        }
    }
}
void VTDCC(int a[],int n)
{
     for (int i=n-1;i>=0;i--)
	{
		if(a[i]>0)
        {
            printf("\nPhan tu duong cuoi cung %d",a[i]);
            break;
        }
    }
}
void PTLN(int a[],int n)
{   
    int dem=0;
    int max = 0;
    int vi_tri;
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            dem=1;
        }
        else if(max==a[i])
        {
            dem++;
        }
    }
    printf("\nPhan tu lon nhat %d",max);
    printf("\nSo phan tu lon nhat %d",dem);
}
void VTPTLN(int a[],int n)
{
    int max=PTLN(a,n);
    printf("\nVi tri cua phan tu lon nhat: ");
    for (int i = 0; i < n; i++)
    {
        if(max==a[i])
        {
            printf("%5d", i + 1);
        }
    }
}

int main()
{
    int n,a[Max];
    Nhapn(n);
    Nhapmang(a,n);
    Xuatmang(a,n);
    VTDDT(a,n);
    VTDCC(a,n);
    PTLN(a,n);
    VTPTLN(a,n);
}
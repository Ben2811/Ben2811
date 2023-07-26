#include <stdio.h>
#include <math.h>
#include <stdlib.h>
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
        for(int j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                printf("Nhap lai a[%d]=",i);
                scanf("%d",&a[i]);
            }
        }
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
bool KTSChinhPhuong(int CP)
{
    if(CP<2)
    {
        return false;
    }
    int sqrt_CP=sqrt(CP);
    if(sqrt_CP*sqrt_CP==CP)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void PTChinhPhuong(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(i%2!=0 && KTSChinhPhuong(a[i]))
        {
            printf("\n%d\t",a[i]);
        }
    }
}
void VT_Lon_Nhat(int a[],int n)
{
    int max = 0;
    int vi_tri;
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            vi_tri=i;
        }
    }
    printf("\nVi tri cua phan tu lon nhat: ");
    printf("%5d",vi_tri);
}
void PT_Am_Lon_Nhatz_min_duong(int a[],int n)
{
    int max_am,min_duong;
    for (int i = 0; i < n; i++)
    {
        if(a[i]<0)
        {
            max_am=a[i];
            break;
        }
    }
    for (int i=0;i<n;i++)
    {
        if(a[i]>max_am && a[i]<0)
        {
            max_am=a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i]>0)
        {
            min_duong=a[i];
        }
    }
    for (int i=0;i<n;i++)
    {
        if(a[i]<min_duong && a[i]>0)
        {
            min_duong=a[i];
        }
    }
    printf("\nPhan tu am lon nhat %d",max_am);
    printf("\nPhan tu duong nho nhat %d",min_duong);
}
void Tong_pt_duong(int a[],int n)
{
    int Tong=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            Tong=Tong+a[i];
        }
    }
    printf("\nTong cac pt o vi tri chan la %d",Tong);
}
int SapXep(const void *a,const void *b)
{
    return (*(int *)a-*(int *)b);
}
int main()
{
    int n,a[Max];
    Nhapn(n);
    Nhapmang(a,n);
    Xuatmang(a,n);
    PTChinhPhuong(a,n);
    VT_Lon_Nhat(a,n);
    PT_Am_Lon_Nhatz_min_duong(a,n);
    Tong_pt_duong(a,n);
    qsort(a,n,sizeof(int ), SapXep);
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
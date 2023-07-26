#include <stdio.h>
#include <time.h>
#include <cstdlib>
#define max 1000000
void sinhsongaunhien(int *a,int n)
{
    srand((unsigned int)time(NULL));
    for(int i=0;i<n;i++)
    {
        *(a+i)=rand()%max;
    }
}
void inDayso(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(a+i));
    }
    printf("\n");
}
int searchx(int x, int *a, int n)
{
    for(int i=0;i<n;i++)
    {
        if(*(a+i)==x)
        {
            return i;
        }
    }
    return -1;
}
int main ()
{
    int x;
    int *a,n;
    srand((unsigned int)time(NULL));
    printf("Nhap so phan tu n =");
    a=new int[n];
    scanf("%d",&n);
    sinhsongaunhien(a,n);
    inDayso(a,n);
    printf("\nNhap so can tim\n");
    scanf("%d",&x);
    clock_t start=clock();
    clock_t end=clock();
    double thoigian=(double)(end-start)/CLOCKS_PER_SEC;
    int kt=searchx(x,a,n);
    if(kt==-1)
    {
        printf("Khong tim thay %d trong day ", x);
    }
    else
    {
        printf("Tim thay %d trong day tai vi tri %d ", x,kt);
        printf("\nThoi gian tim kiem la %f",thoigian);
    }
    delete []a;
}
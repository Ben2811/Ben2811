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
int binarysearch(int *a,int l, int r,int x)
{
    if(l>r) return -1;
    else{
        int mid=(l+r)/2;
        if(*(a+mid)==x) return mid;
        if(*(a+mid)>x) return binarysearch(a,mid+1,r,x);
        else return binarysearch(a,l,mid-1,x);
    }
}
void swap(int *x,int *y)
{
    int temp = *x;
    *x=*y;
    *y=temp;
}
void sapxepday(int *a,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(*(a+i)>*(a+j))
            {
                swap((a+i),(a+j));
            }
        }
    }
}
int main ()
{
    int *a,n;
    srand((unsigned int)time(NULL));
    printf("Nhap so phan tu n =");
    a=new int[n];
    scanf("%d",&n);
    sinhsongaunhien(a,n);
    sapxepday(a,n);
    inDayso(a,n);
    int x;
    printf("Nhap x: ");
    scanf("%d",&x);
    int kt=binarysearch(a,0,n-1,x);
    if(kt==-1)
    {
        printf("Khong tim thay %d trong day ", x);
    }
    else
    {
        printf("Tim thay %d trong day tai vi tri %d ", x,kt);
    }

}
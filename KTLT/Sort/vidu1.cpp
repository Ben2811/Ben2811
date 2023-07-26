#include <stdio.h>
#include <time.h>
#include <cstdlib>
#define max 10000
void sinhsongaunhien(int a[],int n)
{
    srand((unsigned int)time(NULL));
    for(int i=0;i<n;i++)
    {
        a[i]=rand()%max;
    }
}
void inDayso(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
void swap(int x,int y)
{
    int temp = x;
    x=y;
    y=temp;
}
void Bubblesort(int a[],int n)
{
    int i,j,temp;
    for(i=n-2;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void CountSort(int a[], int n , int exp)
{
    
}
int main ()
{
    int a[max],n;
    srand((unsigned int)time(NULL));
    printf("Nhap so phan tu n =");
    scanf("%d",&n);
    sinhsongaunhien(a,n);
    inDayso(a,n);
    return 0;
}
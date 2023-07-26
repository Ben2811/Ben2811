#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
void nhapmatran(int a[100][100],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[i][j]=rand()%100;
        }
    }
}
void xuat(int a[100][100],int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}
bool isPrime(int n)
{
    if(n<2)
        return false;
    int sqrt_n=sqrt(n);
    for(int i=2;i<sqrt_n;i++)
    {
        if(n%sqrt_n==0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
void Prime(int a[100][100],int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (isPrime(a[i][j]))
            {
                printf("%d ", a[i][j]);
            }
        }
    }
}
int main()
{
    srand(unsigned(time(NULL)));
    int a[100][100];
    int n;
    scanf("%d",&n);
    nhapmatran(a,n);
    xuat(a,n);
    Prime(a,n);
}
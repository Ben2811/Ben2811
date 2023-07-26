#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define max 100
typedef int Matran[max][max];
void nhapmt(Matran mt,int n)
{
    int i,j,x;
    srand((unsigned int)time(NULL));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int x=rand()%50;
            mt[i][j]= x;
        }
    }
}
void xuatmt(Matran mt,int n)
{
    int i,j,gt;
    printf("ma tran (mt):\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",mt[i][j]);
        }
        printf("\n");
    }
}
void PTD_Cheo_Chinh(Matran mt,int n)
{
    printf("\nPhan tu duong cheo chinh la : \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                printf("%d\t",mt[i][j]);
            }
            else
            {
                printf ("\t");
            }
        }
        printf("\n");
    }
}
void PTD_Cheo_Phu(Matran mt,int n)
{
    printf("\nPhan tu duong cheo phu la : \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j==n-1)
            {
                printf("%d\t",mt[i][j]);
            }
            else
            {
                printf ("\t");
            }
        }
        printf("\n");
    }
}
void Tong_PT(Matran mt, int n)
{
    int S=0;
    int k;
    printf ("\nNhap dong K ");
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        if(i == k-1)
        {   
            for(int j=0;j<n;j++)
            {
                S=S+mt[i][j];
            }
        }
    }
    printf("\nTong cac phan tu nam tren dong %d la %d",k,S);
}
void Tong_Moi_Dong(Matran mt, int n)
{
    int S=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            S=S+mt[i][j];
        }
        printf("\nTong cac phan tu dong %d la %d",i+1,S);
        printf("\n");
        S=0;
    }
}
void Cac_Dong_Max(Matran mt, int n, int Tong)
{
    int S = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            S += mt[i][j];
        }
        if (Tong == S)
            printf("Dong %d co gia tri lon nhat", i + 1);
        S = 0;
    }
}
void Dong_MAX(Matran mt, int n)
{
    int S = 0;
    int Dem = 0, temp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            S += mt[i][j];
        }
        if (S > temp)
            temp = S;
        S = 0;
    }
    Cac_Dong_Max(mt, n, temp);
}

int main ()
{
    int n;
    Matran mt;
    printf("nhap so dong");
    scanf("%d",&n);
    nhapmt(mt,n);
    xuatmt(mt,n);
    PTD_Cheo_Chinh(mt,n);
    PTD_Cheo_Phu(mt,n);
    Tong_PT(mt,n);
    Tong_Moi_Dong(mt,n);
    Dong_MAX(mt,n);
}
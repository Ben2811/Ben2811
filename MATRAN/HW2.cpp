#include <stdio.h>
#include <math.h>
#define max 100
typedef int Matran[max][max];
void nhapmt(Matran mt,int n,int m)
{
    int i,j,gt;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("nhap gt tai vi tri [%d][%d] : ",i,j);
            scanf("%d",&gt);
            mt[i][j]=gt;
        }
    }
}
void xuatmt(Matran mt,int n,int m)
{
    int i,j,gt;
    printf("ma tran (mt):\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf(" %d ",mt[i][j]);
        }
        printf("\n");
    }
}

int xuatsochan(Matran mt,int n, int m )
{
    int i,j;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(mt[i][j]%2==0)
            {
                printf("so chan xuat hien tai dong %d cot %d la: %d\n",i,j,mt[i][j]);
            }
        }
    }
}
int ktnt(int n)
{
    if(n<2)
        return 0;
    if(n>=2)
    {
        if(n==2)
            return 1;
        else
        {
            for(int i=2;i<=sqrt(n);i++)
            {
                if(n%i==0)
                return 0;
            }
        }
        return 1;
    }
}
void SNT(Matran mt,int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(ktnt(mt[i][j])==1)
            {
                printf("\n%d la so nguyen to nam tai dong %d cot %d",mt[i][j],i,j);
            }
        }
    }
}
void Nhapx(Matran mt,int n,int m)
{
    int x;
    printf("\nnhap x");
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if (mt[i][j] == x){
                printf("vi tri cua x trong ma tran la %d %d",i,j);
            break;
            }

        }
    }

}
void menu()
{
    int m,n;
    Matran mt;
    printf("nhap so dong");
    scanf("%d",&n);
    printf("nhap so cot");
    scanf("%d",&m);
    nhapmt(mt,n,m);
    xuatmt(mt,n,m);
    xuatsochan(mt,n,m);
    SNT(mt,n,m);
    Nhapx(mt,n,m);
}
int main()
{
    menu();
}
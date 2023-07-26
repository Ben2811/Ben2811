#include"stdio.h"
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
}
int main()
{
    menu();
}
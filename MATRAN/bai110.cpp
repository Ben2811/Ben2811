#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max 100
typedef int Matran[max][max];
void xuatmt(Matran mt,int n,int m)
{
    srand((unsigned int)time(NULL));
    int i,j,x;
    printf("ma tran (mt):\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {

            int x=rand()%50;
            mt[i][j]= x;
            printf(" %d ",mt[i][j]);
        }
        printf("\n");
    }
}
void XTGD(Matran mt,int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(j<i)
            {
                printf("%5d",mt[i][j]);
            }
        }
        printf("\n");
    }
}
void XTGT(Matran mt,int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(j>i)
            {
                printf("%5d",mt[i][j]);
            }
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
    xuatmt(mt,n,m);
    XTGD(mt,n,m);
    printf("\n");
    XTGT(mt,n,m);
}
int main()
{
    menu();
}
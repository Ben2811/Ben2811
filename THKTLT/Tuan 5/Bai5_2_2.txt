#include <stdio.h>
#include <time.h>
#include <cstdlib>
#define Max 100
void SinhMT(int a[Max][Max], int d , int c)
{
    srand((unsigned int)time(NULL));
    for(int i=0;i<d;i++)
    {
        for(int j=0;j<c;j++)
        {
            a[i][j]=rand()%Max;
        }
    }
}
void LuuFILE(int a[Max][Max], int d, int c)
{
    FILE *f;
    f=fopen("test.inp","wt");
    if(f==NULL)
    {
        printf("ERROR");
        exit(0);
    }
    fprintf(f,"%d %d\n",d,c);
    for(int i=0;i<d;i++)
    {
        for(int j=0;j<c;j++)
        {
            fprintf(f,"%d\t",a[i][j]);

        }
        fprintf(f,"\n");
    }
    fclose(f);
}
void DocFILE(int a[Max][Max], int d, int c)
{
    FILE *f;
    f=fopen("test.inp","r");
    if(f==NULL)
    {
        printf("ERROR");
        exit(0);
    }
    printf("\nSo dong la %d\n",d);
    printf("\nSo cot la %d\n",c);
    for(int i=0;i<d;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    fclose(f);
}
void xuatmt(int a[Max][Max],int d, int c)
{
    printf("ma tran (mt):\n");
    for(int i=0;i<d;i++)
    {
        for(int j=0;j<c;j++)
        {
           printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
}
int main ()
{
    int a[Max][Max],d=5,c=6;
    SinhMT(a,d,c);
    LuuFILE(a,d,c);
    DocFILE(a,d,c);
    xuatmt(a,d,c);
}
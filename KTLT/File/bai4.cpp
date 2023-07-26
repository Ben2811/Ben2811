#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define fileIn "so.inp"
#define fileout "so.out"
void taofile(int n , int M)
{
    FILE *f= fopen("so.inp","w");
    if (f==NULL)
        printf("Loi ghi file");
        return;
    fprintf(f,"%d\n%d",n,M);
    fclose(f);
}
bool DocFile(int &n, int &M)
{
    FILE *f= fopen(fileIn,"r");
    if (f==NULL)
        return false;
    fscanf(f,"%d\n%d",&n,&M);
    fclose(f);
}
bool Ghifile(int n, int M)
{
    FILE *f= fopen(fileout, "w");
    if (f==NULL)
    {
        return false;
    }
    fprintf(f,"%d\n",n);
    for(int i =0; i<n; i++)
    {
        fprintf(f,"%d\n",rand()%M+1);
    }
    fclose(f);
}
int main ()
{
    int n,M;
    taofile(3,10);
    srand((unsigned int)time(NULL));
    if(DocFile(n,M))
        if (Ghifile(n,M))
        {   
            printf("Ghi file thanh cong");
        }
        else
        {
            printf("error!!!!!!");
        }
    else
    {
        printf("error!!!");
    }
    return 0;
}
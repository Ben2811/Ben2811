#include <stdio.h>
#include <conio.h>
#include<math.h>

void Nhap(int a[100][100],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("\ta[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);

        }
    }
}
void Show_dong(int a[100][100],int n)
{
    int u,v;
    for(u=0;u<n;u++)
	{
        printf(" ");
        for(v=0;v<n;v++)
		{
           printf("%4d",a[u][v]);
        }
    }
}
void Show(int a[100][100],int n)
{
    int u,v;
    for(u=0;u<n;u++)
	{
        printf("\n\n\t");
        for(v=0;v<n;v++)
		{
           printf("\t  %d",a[u][v]);
        }
    }
}
int main()
{
    int a[100][100];
    int n;
    printf("\n - Nhap bac cua ma tran vuong: ");
    scanf("%d",&n);
    Nhap(a,n);
    printf("\nma tran vua nhap o dang 1 dong la:");
    Show_dong(a,n);
    printf("\nma tran dang bang :");
    Show(a,n);
    return 0;
}
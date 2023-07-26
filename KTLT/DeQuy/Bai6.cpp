#include <stdio.h>
int LietKeLe(int a[],int n)
{
    if (n==0)
    {
        return 0;
    }
    if(a[n-1]%2!=0)
    {
        printf("%d",a[n-1]);
    }
}
int main()
{
    int a[50];
    int n;
    printf("Nhap n ");
    scanf("%d",&n);
    printf("Bieu Dien nhi phan cua so (n) = [%d]: ",n);
    LietKeLe(a,n);
    return 0;
}
#include <stdio.h>
int Recursion(int n)
{
    if (n!=0)
    {
        Recursion(n/2);
        printf("%d",n%2);
    }
}
int main()
{
    int n;
    printf("Nhap n ");
    scanf("%d",&n);
    printf("Bieu Dien nhi phan cua so (n) = [%d]: ",n);
    Recursion(n);
    return 0;
}
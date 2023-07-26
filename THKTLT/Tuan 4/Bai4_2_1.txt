#include <stdio.h>
void NhapMang(int a[], int n)
{
    if (n >= 0)
    {
        NhapMang(a, n - 1);
        printf("Nhap phan tu thu %d: ", n);
        scanf("%d", &a[n]);
    }
}
void XuatMang(int a[], int n)
{
    if (n >= 0)
    {
        printf("Phan tu thu %d la: %d\n", n, a[n]);
        XuatMang(a, n - 1);
    }
}
int TongMang(int a[], int n)
{
    if (n == 0)
        return a[0];
    else
        return a[n] + TongMang(a, n - 1);
}
int TongPTChan(int a[], int n)
{
    if (n == 0)
        return a[0];
    if (n % 2 == 0)
        return a[n] + TongPTChan(a, n - 1);
    return TongPTChan(a, n - 1);
}
int SoPTDuong(int a[], int n)
{
    if (n == 0)
        return 0;
    if (a[n - 1] > 0)
        return 1 + SoPTDuong(a, n - 1);
    else
        return SoPTDuong(a, n - 1);
}
int TimMax(int a[],int n )
{
	if (n == 0)
		return -1;
	if (n == 1)
		return a[0];
	else
	{
		if (a[n - 1] > TimMax(a, n - 1))
			return a[n - 1];
		else
			return TimMax(a, n - 1);
	}
}
int PTCCC(int a[],int n)
{
    if(n==0)
    {
        return 0;
    }
    if(a[n-1]%2==0)
    {
        return a[n-1];
    }
    return PTCCC(a,n-1);
}
int findx(int a[],int n ,int x)
{
    if(n==0)
        return 0;
    if(x==a[n-1])
    {
        return n-1;
    }
    return findx(a,n-1,x);
}
int main()
{
    int n,a[100],x;
    printf("Nhap n ");
    scanf("%d",&n);
    NhapMang(a,n-1);
    XuatMang(a,n-1);
    printf("\nTong mang la: %d",TongMang(a,n-1));
    printf("\nTong phan tu chan la %d",TongPTChan(a,n-1));
    printf("\nSO luong phan tu duong la %d",SoPTDuong(a,n));
    printf("\n Max lon nhat la %d",TimMax(a,n));
    printf("\n Phan tu duong cuoi cung la %d",PTCCC(a,n-1));
    printf("\nNhap x can tim ");
    scanf("%d",&x);
    printf("\nX tim thay o %d",findx(a,n-1,x));
}
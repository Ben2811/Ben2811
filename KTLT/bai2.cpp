#include <stdio.h>
#include <conio.h>
#define Max 100

void Nhapn(int &n)
{
	do
	{
		printf("nhap n :");
		scanf("%d",&n);
		if(n<=0 || n>100)
		printf("so khong hop le vui long nhap lai \n");
	}while(n<=0 || n>100);
}
void NhapMang(int a[], int n)
{
	for (int i = 0; i<n; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}
void XuatMang(int a[], int n)
{
	printf("\n Mang gom cac phan tu:\n");
	for(int i =0 ;i<n;i++)
	{
		printf("%5d",a[i]);
	}
}
int main()
{
	int a[Max],n;
	Nhapn(n);
	NhapMang(a,n);
	XuatMang(a,n);
	return 0;
}

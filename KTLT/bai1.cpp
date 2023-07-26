#include<stdio.h>

void nhap(int &a,int &b)
{
	printf("nhap a:");
	scanf("%d",&a);
	printf("nhap b:");
	scanf("%d",&b);
}
int TinhTong(int a,int b)
{
	int tong=0;
	tong=a+b;
	return tong;
}
void xuatketqua(int tong)
{
	printf("%d",tong);
}
int main(){
	int a, b, S;
	nhap(a ,b);
	S = TinhTong(a, b);
	xuatketqua(S);
}

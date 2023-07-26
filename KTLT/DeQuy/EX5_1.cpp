#include <stdio.h>
#include <math.h>
#define MAX 100

void input(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);	
	}
	printf("\n");
}

void output(int a[],int n)
{
	int tg; 
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[i]< a[j])
			{
				tg=a[i];
				a[i]=a[j];
				a[j]=tg; 
			}
		}	
	} 
	for(int i=0;i<n;i++)
	{
		printf("a[%d]= %d",i,a[i]);
		printf("\n");	
	}
	printf("\n"); 
} 

int DeQuy(int a[], int left, int right, int x)
{
	if(left<=right)
	{
		int mid = left + (right-left)/2;
		if(a[mid]==x)
			return mid;
		if(a[mid]>x)
			return DeQuy(a,left,mid-1,x);
		return DeQuy(a,mid+1,right,x);
	}
 	return -1; 
}

int main()
{
	int x; 
	int a[MAX];
	int n;
	printf("Nhap do dai mang : "); scanf("%d",&n); 
	input(a,n);
	output(a,n); 
	printf("Nhap so can tim : "); 
	scanf("%d",&x); 
	int result=DeQuy(a,0,n-1,x);
	if(result==-1) printf("khong tim thay %d",x);
	else printf("%d xuat hien tai vi tri %d",x,result); 
	return 0;
}
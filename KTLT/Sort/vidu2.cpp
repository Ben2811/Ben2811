#include <stdio.h>
#include <time.h>
#include <cstdlib>
#define MAX 10000000
void swap(int *x,int *y)
{
	int temp =*x;
	*x=*y;
	*y=temp;
}
void nhapDayRandom(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		*(a+i)=rand()%MAX;
	}
}
int Partition(int *a,int left,int right)
{
	int pivot=*(a+left);
	int i=left+1;
	int j=right;
	while(i<=j){
		if(*(a+i)<=pivot) i++;
		else if(*(a+j)>pivot) j--;
		else  swap((a+i),(a+j));
	}
	swap((a+left),(a+j));
	return j;
}
void QuickSort(int *a,int left,int right)
{
	if(left>=right) return;
	int i=Partition(a,left,right);
	QuickSort(a,left,i-1);
	QuickSort(a,i+1,right);
}

void inDaySo(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",*(a+i));
	}
	printf("\n");
}
int main()
{
	srand((unsigned int)time(NULL));
	int *a;
	int n;
	printf("Nhap n=");scanf("%d",&n);
	a=new int[n];
	nhapDayRandom(a,n);
	QuickSort(a,0,n-1);
	inDaySo(a,n);
	delete[]a;
	return 0;
}

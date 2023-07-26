#include<stdio.h>
#define max 50
void taomang(int a[], int n)
{
    for(int i =0 ; i<n; i++)
    {
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }
}
void xuatmang(int a[], int n)
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
int search (int a[],int l,int r, int x)
{   
    if(r>=l)
    {
        int mid =(l+r)/2;
        if(a[mid]==x)
            return mid;
        if(a[mid]>x)
            return search(a,l,mid-1,x);
        if(a[mid]<x)
            return search(a,mid+1,r,x);
    }
    return -1;
}
int main ()
{
    int n,x,a[max];
    printf("Nhap so luong mang ");
    scanf("%d",&n);
    int l=0, r=n-1;
    taomang(a,n);
    xuatmang(a,n);
    printf("\n Nhap phan tu can tim ");
    scanf("%d",&x);
    int s=search(a,l,r,x);
    if(s==-1)
    {
        printf("Ko tim thay ");
    }
    else
    {
        printf("Tim thay %d tai vi tri %d",x,s+1);
    }
    return 0;
}
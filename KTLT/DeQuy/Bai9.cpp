#include<stdio.h>
#define max 50
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
    int s,x;
    int n=9;
    int a[]={5,6,7,8,9,10,22,46,56};
    printf("nhap so can tim ");
    scanf("%d",&x);
    s=search(a,0,n-1,x);
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
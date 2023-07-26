#include"stdio.h"
#include"stdlib.h"
void nhapmang(int a[],int &n){
    FILE *f=fopen("mang.inp","a");
        for(int i=0;i<n;i++){
            fscanf(f,"%d",&a[i]);
        }
}
void docfile(int a[],int &n){
    FILE *f=fopen("mang.inp","r");
    printf("\n\t cac so trong file : \n");
    for(int i=0;i<n;i++){
        fprintf(f,"%d",a[i]);
    }
}
int main(){
    int a[100];
    int n;
    FILE *f=fopen("mang.inp","w");
    if(f==NULL) printf("mo khong thanh cong");
    else
        printf("mo thanh cong");
        printf("nhap n : ");
        scanf("%d",&n);
        nhapmang(a,n);
        docfile(a,n);
}
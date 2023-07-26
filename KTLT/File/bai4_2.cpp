#include"stdio.h"
#include"time.h"
#include"stdlib.h"
#define max 100
void docfile(int a[max],int &n){
	FILE *f;
	f=fopen("mang.inp.txt","rt");
	if(f==NULL){
		printf("mo file khong thanh cong");
		exit(0);
	}
	else
	for(int i=0;i<n;i++){
		fprintf(f,"%d\n",a[i]);
	}
	fclose(f);
}
int KTNT(int n){
	if(n<2){
		return 0;
	}
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
void ghiSNT(int a[max],int n){
	FILE *f;
	f=fopen("ketqua.out.txt","w");
	fprintf(f,"\n\nCAC SO NGUYEN TO TRONG DAY SO : \n");
	for(int i=0;i<n;i++){
		if(KTNT(a[i])==1){
			fprintf(f,"%d ",a[i]);
		}
	}
	printf("\nda nhap cac so nguyen to vao trong file ,dong file");
	fclose(f);
}
int main(){
	srand((unsigned int)time(NULL));
	int a[max];
	int n;
	FILE *f;
	f=fopen("mang.inp.txt","w");
	printf("nhap n : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		a[i]=rand()%50;
		fprintf(f,"%d ",a[i]);
	}
	docfile(a,n);
	ghiSNT(a,n);
	fclose(f);
}
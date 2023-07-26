#include<stdio.h>
long count=0;
void Tower(int n , char a, char b, char c ){
	if(n==1){
		count++;
		printf("\t%d chuyen %c-->%c\n",count,a,c);
		return;
	}
	Tower(n-1,a,c,b);
	Tower(1,a,b,c);
	Tower(n-1,b,a,c);
	}
int main(){
	char a='A', b='B', c='C';
	int n;
	printf("Nhap so luong dia (n) muon chuyen tu cot A sang cot B: ");
	scanf("%d",&n);
	Tower(n,a,b,c);
}
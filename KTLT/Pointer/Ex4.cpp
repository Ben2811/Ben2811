#include<stdio.h>
#include<string.h>
#include<conio.h>

typedef struct student 
{	unsigned int code;
	char name[20];
	int age;
}s;
void Input_One_Student(student *x)
{
	printf("\nNhap vao ma so sinh vien:");
	scanf("%d",&x->code);
	fflush(stdin);
	printf("Nhap vao ten hoc sinh:");
	gets(x->name);
	printf("Nhap tuoi:");
	scanf("%d",&x->age);
	fflush(stdin);
	printf("_______________________");
}
void Intput_Student_List(student a[],int n)
{
	for(int i=0;i<n;i++)
		Input_One_Student(&a[i]);
}
void Output_Student_List(student a[],int n)
{	
	for (int i=0;i<n;i++)
	printf("\nMSSV:%d Name:%s Age:%d \n",a[i].code,a[i].name,a[i].age);
	printf("_________________________________________________\n");
}
int main()
{
	int n;  
	student a[100];
	printf("Nhap vao so hoc sinh:");
	scanf("%d",&n);
	printf("_________________________________________________");
	Intput_Student_List(a,n);
	Output_Student_List(a,n);
}
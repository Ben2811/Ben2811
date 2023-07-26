#include <stdio.h>
#include <conio.h>
#include<string.h>
#define Max 100
struct QuyenSach
{
    unsigned int masach;
    char Ten_Sach[Max];
    unsigned int Nam_Xuat_Ban;
    unsigned int Gia;

};
void Nhap_Sach(QuyenSach &qs)
{
    printf("Ma sach ");
    scanf("%d",&qs.masach);
    fflush(stdin);
    printf("Ten sach ");
    fflush(stdin);
    gets(qs.Ten_Sach);
    printf("Nam xuat ban ");
    scanf("%d",&qs.Nam_Xuat_Ban);
    printf("Gia ");
    scanf("%d",&qs.Gia);  
}
void Xuat_Sach(QuyenSach qs)
{
    printf(" %d || %s || %d || %d\n",qs.masach,qs.Ten_Sach,qs.Nam_Xuat_Ban,qs.Gia);
}
void DanhSachQS(QuyenSach qs[Max], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap qs thu %d\n", i+1);
        Nhap_Sach(qs[i]);
    }
}
void ShowDSachQS(QuyenSach qs[Max], int n)
{
    for (int i = 0; i <n; i++)
    {
        Xuat_Sach(qs[i]);
    }
}
void Tim_Kiem_QS(QuyenSach qs[Max], int n)
{
    char Tim_Kiem[Max];
    printf("\nNhap ten quyen sach: ");
    scanf("%s",&Tim_Kiem);
    for(int i=0;i<n;i++)
    {
	    if(strcmp(qs[i].Ten_Sach,Tim_Kiem)==0)							
		{
            Xuat_Sach(qs[i]);
        }
        else 
		{
            printf("Khong tim thay sach nay!!");
        }	
    }
}
void Tim_Gia_QS_TN(QuyenSach qs[Max], int n)
{
    printf("\nQS Gia thap nhat la \n");
    int min=qs[0].Gia;
    for(int i=0;i<n;i++)
    {
        if(qs[i].Gia<min)
        {
            min=qs[i].Gia;
        }
    }
     for (int i = 0; i <n; i++)
     {
        if (min == qs[i].Gia)
         Xuat_Sach(qs[i]);
      }
}
int main ()
{
    int n;
    QuyenSach qs[Max];
    printf("Nhap n");
    scanf("%d", &n);
    DanhSachQS(qs, n);
    ShowDSachQS(qs, n);
    Tim_Kiem_QS(qs,n);
    Tim_Gia_QS_TN(qs,n);
}
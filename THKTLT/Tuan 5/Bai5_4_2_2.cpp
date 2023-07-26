#include <stdio.h>
#include<string.h>
#define max 100
struct QLTV
{
    unsigned int masach;
    char TenSach[40];
    float Gia;
};
void Nhap_Sach(QLTV &ql)
{
    printf("Ma sach ");
    scanf("%d",&ql.masach);
    fflush(stdin);
    printf("Ten sach ");
    fflush(stdin);
    gets(ql.TenSach);
    printf("Gia ");
    scanf("%f",&ql.Gia);  
    }
    void Xuat_Sach(QLTV ql)
    {
        printf(" %d || %s || %f\n",ql.masach,ql.TenSach,ql.Gia);
    }
    void Danhsach_Nhap(QLTV ql[max],int n)
    {
        for (int i = 0; i < n; i++)
        {
            printf("Nhap qs thu %d\n", i+1);
            Nhap_Sach(ql[i]);
        }
    }
    void DSXuatsach(QLTV ql[max],int n)
    {
        for (int i = 0; i <n; i++)
        {
            Xuat_Sach(ql[i]);
        }
        printf("\n");

    }
    void Search(QLTV ql[max],int n)
    {
        int x;
        printf("\n Nhap ma sach can tim ");
        scanf("%d",&x);
        for (int i = 0; i < n; i++)
        {
            if(ql[i].masach==x)
            {
                printf(" %d || %s || %f\n",ql[i].masach,ql[i].TenSach,ql[i].Gia);
                break;
            }
            else
            {
                printf("KO tim thay ma sach\n");
            }
        }
        printf("\n\n");

    }
    void SearchTen(QLTV ql[max],int n)
    {
        char y[50];
        printf("\n Nhap ten sach can tim ");
        scanf("%s",&y);
        for(int i=0;i<n;i++)
        {
            if(strcmp(ql[i].TenSach,y)==0)							
            {
                Xuat_Sach(ql[i]);
                break; 
            }
            else 
            {
                printf("Khong tim thay sach nay!!");
            }	
        }
    }
    void TimGiaCaoNhat(QLTV ql[max],int n)
    {
        int Max = 0;
        printf("\nLuong cao nhat la : \n");
        for (int i = 0; i <n; i++)
        {
            if (Max < ql[i].Gia)
            Max = ql[i].Gia;
        }
        for (int i = 0; i <n; i++)
        {
            if (Max == ql[i].Gia)
            Xuat_Sach(ql[i]);
        }
    }
    int main ()
    {
        int n;
        QLTV ql[max];
        printf("Nhap n");
        scanf("%d", &n);
        Danhsach_Nhap(ql,n);
        DSXuatsach(ql,n);
        Search(ql,n);
        SearchTen(ql,n);
        TimGiaCaoNhat(ql,n);
     }
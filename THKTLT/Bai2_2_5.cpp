#include <stdio.h>
#include <string.h>
#define Max 100
struct SinhVien
{
    char maSV[Max];
    char HoTen[Max];
    char Gioi_Tinh;
    char Ngay_Sinh[Max];
    char Lop[7];
    float Diem_TB;
};
void Nhap_SV(SinhVien &sv)
{
    printf("Ma sinh vien ");
    fflush(stdin);
    gets(sv.maSV);
    printf("Ho ten sinh vien ");
    gets(sv.HoTen);
    printf("Gioi tinh: \n x:Nam \n y:nu \n k=khong xac dinh ");
    scanf("%c",&sv.Gioi_Tinh);
    fflush(stdin);
    printf("Ngay Sinh ");
    gets(sv.Ngay_Sinh);
    printf("Lop ");
    gets(sv.Lop);
    fflush(stdin);
    printf("Diem trung binh ");
    scanf("%f",&sv.Diem_TB);
    printf("_______________________________\n");
}
void Xuat_SV(SinhVien sv)
{
    printf("\nMa sinh vien: %s\n",sv.maSV);
    printf("Ho ten sinh vien: %s\n",sv.HoTen);
    if(sv.Gioi_Tinh=='x')
    {
        printf("Gioi tinh: Nam\n");
    }else if(sv.Gioi_Tinh=='y')
    {
        printf("Gioi tinh: Nu\n");
    }else
    {
        printf("Gioi tinh: Khong xac dinh\n");
    }
    printf("Ngay Sinh: %s\n",sv.Ngay_Sinh);
    printf("Lop: %s\n",sv.Lop);
    printf("Diem trung binh: %f\n",sv.Diem_TB);
}
void Nhap_DS_SV(SinhVien sv[Max], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Nhap sv thu %d\n",i+1);
        Nhap_SV(sv[i]);
    } 
}
void Xuat_DS_SV(SinhVien sv[Max], int n)
{
    for(int i=0;i<n;i++)
    {
        Xuat_SV(sv[i]);
        printf("_______________________________\n");
    }
}
void Xuat_SV_Tb_tren4(SinhVien sv[Max], int n)
{
    printf("\nSinh Vien co diem trung binh tren 4 la: \n");
    for(int i=0;i<n;i++)
    {
        if(sv[i].Diem_TB>=4)
        {
            Xuat_SV(sv[i]);
            printf("_______________________________\n");
        }
    }
}
bool Tim_Nganh(SinhVien sv)
{
    strrev(sv.Lop);
    if(sv.Lop[0]== 'N' && sv.Lop[1]=='C')
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Tim_sv_Nu(SinhVien sv)
{
    return sv.Gioi_Tinh=='y' ? true : false;
}
void Tim_Kiem (SinhVien sv[Max],int n)
{
    printf("Sinh Vien la nganh cong nghe thong tin: \n ");
    int Dem=0;
    for (int i=0;i<n;i++)
    {
        if(Tim_Nganh(sv[i]));
        {
            Xuat_SV(sv[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(Tim_sv_Nu(sv[i]))
        {
            Dem++;
        }
    }
    printf("\nCo %d la sinh vien nu",Dem);
}
void Tim_Diem_TB_CaoNhat(SinhVien sv[Max], int n)
{
    float max=0;
    for (int i = 0; i <n; i++)
    {
        if (max < sv[i].Diem_TB)
        max = sv[i].Diem_TB;
    }
    for (int i = 0; i <n; i++)
    {
        if (max == sv[i].Diem_TB)
        printf("\nDiem trung binh cao nhat la %f",max);
    }
}
int main ()
{
    int n;
    SinhVien sv[Max];
    printf("Nhap so luong sinh vien ");
    scanf("%d",&n);
    printf("_______________________________\n");
    Nhap_DS_SV(sv,n);
    Xuat_DS_SV(sv,n);
    Xuat_SV_Tb_tren4(sv,n);
    Tim_Kiem(sv,n);
    Tim_Diem_TB_CaoNhat(sv,n);
}
#include <stdio.h>
#define Max 100
struct SinhVien
{
    char ho_ten[Max];
    char dia_chi[Max];
    unsigned int nam_sinh;
    float diem_tb;
    bool dang_hoc_tap;//true la dang hoc false la thoi hoc  
};
void NhapSV(SinhVien &sv)
{
    fflush(stdin);
    printf("Ho ten sinh vien ");
    gets(sv.ho_ten);
    printf("Dia chi sinh vien ");
    fflush(stdin);
    gets(sv.dia_chi);
    printf("Nam sinh ");
    scanf("%d",&sv.nam_sinh);
    printf ("Diem trung binh ");
    scanf("%f",&sv.diem_tb);
    printf("tinnh trang hoc tap ");
    scanf("%d",&sv.dang_hoc_tap);
}
void XuatSV(SinhVien sv)
{
    printf("%s\n%s\n%d\n%f\n%d\n",sv.ho_ten,sv.dia_chi,sv.nam_sinh,sv.diem_tb,sv.dang_hoc_tap);
}
void DSSV(SinhVien ds[100],int n)
{
    for(int i =1;i<n;i++)
    {
        printf("Nhap sv thu %d:",i);
        NhapSV(ds[i]);
    }
}
void SDSSV(SinhVien ds[100],int n)
{
    for(int i=1;i<n;i++)
    {
        printf("%d\n",i);
        XuatSV(ds[i]);
    }
}
int main()
{
    SinhVien ds[100];
    int n;
    printf("nhap sl sv ");
    scanf("%d",&n);
    DSSV(ds,n);
    SDSSV(ds,n);
}
#include <stdio.h>
#define Max 100
struct GiangVien
{
    char Ho_Ten[Max];
    char Dia_Chi[Max];
    char Khoa[Max];
    unsigned int Ma_so_thue;
    unsigned int Luong;
};          
void NhapGV(GiangVien &gv)
{
    fflush(stdin);
    printf("Ho ten giang vien ");
    gets(gv.Ho_Ten);
    printf("Dia chi giang vien ");
    fflush(stdin);
    gets(gv.Dia_Chi);
    printf("Khoa giang vien ");
    fflush(stdin);
    gets(gv.Khoa);
    printf("Ma so thue ");
    scanf("%d",&gv.Ma_so_thue);
    printf("Luong giang vien ");
    scanf("%d",&gv.Luong);
}
void XuatGV(GiangVien gv)
{
    printf("%s || %s || %s ||%d ||%d\n",gv.Ho_Ten,gv.Dia_Chi,gv.Khoa,gv.Ma_so_thue,gv.Luong);
}
void DanhSachGV(GiangVien gv[Max], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap gv thu %d\n", i+1);
        NhapGV(gv[i]);
    }
}
void ShowDSachGV(GiangVien gv[Max], int n)
{
    for (int i = 0; i <n; i++)
    {
        XuatGV(gv[i]);
    }
}
void XuatThue(GiangVien gv[Max], int n)
{
    int thue;
    printf("Nhap so thue thue can tim");
    scanf("%d", &thue);
    for (int i = 0; i <n; i++)
    {
        if(thue == gv[i].Ma_so_thue)
        {       
            XuatGV(gv[i]);
            break;
        }
        else
        {
            printf("\nKo tim thay\n");
        }

    }
}
void LuongCaoNhat(GiangVien gv[Max], int n){
    int max = 0;
    printf("\nLuong cao nhat la : \n");
    for (int i = 0; i <n; i++)
    {
        if (max < gv[i].Luong)
        max = gv[i].Luong;
    }
    for (int i = 0; i <n; i++)
    {
        if (max == gv[i].Luong)
        XuatGV(gv[i]);
    }
}
int main()
{
    int n, thue;
    GiangVien gv[100];
    printf("Nhap n");
    scanf("%d", &n);
    DanhSachGV(gv, n);
    ShowDSachGV(gv, n);
    XuatThue(gv, n);
    LuongCaoNhat(gv, n);
}
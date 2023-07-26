#include <stdio.h>
struct Ngay
{
    unsigned char thu;
    unsigned char ngay;
    unsigned char thang;
    unsigned int nam;
};
void NhapNgay(Ngay &n)
{
    printf("Nhap thu: ");
    scanf("%hhu",&n.thu);
    printf("Nhap ngay: ");
    scanf("%hhu",&n.ngay);
    printf("Nhap thang: ");
    scanf("%hhu",&n.thang);
    printf("Nhap nam: ");
    scanf("%d",&n.nam);
}
void XuatNgay(Ngay n)
{
    printf("Ngay %d/%d/%d, thu %d",n.ngay,n.thang,n.nam,n.thu);
}
int main ()
{
    Ngay d;
    NhapNgay(d);
    XuatNgay(d);
}
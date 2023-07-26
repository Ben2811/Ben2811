#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct SinhVien
{
    char HoTen[100];
    float DTB;
};
void GhiFile(SinhVien &sv)
{
    FILE *f = fopen("sinhvien.bin", "wb");
    if (f == NULL)
    {
        printf("Mo tap tin khong thanh cong ! ");
    }
    else
    {

        strcpy(sv.HoTen, "Tran Kim Trong");
        sv.DTB = 8.25;
        fwrite(&sv, sizeof(sv), 1, f);
        printf("Ghi Thong Tin Thanh Cong, Dong file !\n");
        fclose(f);
    }
}
void DocFile(SinhVien sv)
{

    FILE *f = fopen("sinhvien.bin", "rb");
    if (f == NULL)
    {
        printf("Mo tap tin khong thanh cong ! ");
    }
    else
    {
        fread(&sv,sizeof(SinhVien),1,f);
        printf("Doc thong tin sinh vien tu file comple, thong tinL\n");
        printf("-Ho & Ten [%s].\n",sv.HoTen);
        printf("DTB: [%.3f].\n",sv.DTB);
        printf("Dong file !\n");
        fclose(f);
    }
}
int main()
{
    SinhVien sv;
    GhiFile(sv);
    DocFile(sv);
}
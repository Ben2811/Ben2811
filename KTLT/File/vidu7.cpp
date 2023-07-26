#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Date
{
    int ng;
    int th;
    int nm;
};
struct HoaDon
{
    char maHD[6];
    char hotenKH[30];
    Date ngay;
    int nSach;
    Sach dsSach[10];
};

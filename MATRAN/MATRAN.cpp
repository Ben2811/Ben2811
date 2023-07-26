#include <stdio.h>
#define MAX 100
typedef int Matran[MAX][MAX];

void NhapMaTran(Matran mt, int n, int m)
{
    int gt;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Nhap dong %d, cot %d", i, j);
            scanf("%d", &gt);
            mt[i][j] = gt;
        }
    }
}

void XuatMaTran(Matran mt, int n, int m)
{
    int gt;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("mt[%d][%d] = %d", i, j, mt[i][j]);
        }
    }
}

void menu()
{
    Matran mt;
    int n, m;
    printf("Nhap so dong");
    scanf("%d", &n);
    printf("Nhap so cot");
    scanf("%d", &m);
    NhapMaTran(mt, n, m);
    XuatMaTran(mt, n, m);
}
int main()
{
    menu();
}
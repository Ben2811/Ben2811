#include <stdio.h>
template <typename T>
T TongTB(T &a, T &b)
{
    T S = (a + b) / 2;
    return S;
}
int main()
{
    int a = 10, b = 2;
    printf("Tong:%d\n", TongTB(a, b));
    float c = 8.4, d = 2.1;
    printf("Tong:%f\n", TongTB(c, d));
}
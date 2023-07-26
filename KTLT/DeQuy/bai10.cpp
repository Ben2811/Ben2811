#include <stdio.h>
Long TinhXn(int n)
{
    if(n==0)
        return 1;
    return TinhXn(n-1)+TinhYn(n-1);
}

long TinhYn(int n)
{
    if(n==0)
        return 1;
    return 
}
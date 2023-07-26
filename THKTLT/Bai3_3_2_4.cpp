#include <stdio.h>
#include <string.h>
void ChuyenChu(char *s)
{
    if(*s>='a'&&*s<='z')
    {
        *s=*s-32;
    }
    for(int i =0 ; i<strlen(s);i++)
    {
        if(*(s+i)=='' && *(s+i+1)>='a' && *(s+i+1)<='z');
        {
            *(s+i)=*(s+i)-32;
        }
        if(*(s+i)!='' && *(s+i+1)>='A' && *(s+i+1)<='Z');
        {
            *(s+i+1)=*(s+i+1)+32;
        } 
    }
    printf("%s",s);
}
int main ()
{
    
    char *s= new char [60];
    printf("Nhap chu can tim ");
    gets(s);
    ChuyenChu(s);
    free(s);
    return 0;
}
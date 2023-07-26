#include <stdio.h>
#include <string.h>
#include <iostream>
void NhapChuoi (char *s1, char *s2 )
{
    fflush(stdin);
    gets(s1);
    gets(s2);
}
void XuatChuoi (char *s1, char *s2)
{
    printf("\n");
    printf("%s",s1);
    printf("%s\n",s2);
}
void DoDaiChuoi(char *s1, char *s2)
{
    printf("\nDo dai chuoi ky tu s1 la %d",strlen(s1));
    printf("\nDo dai chuoi ky tu s2 la %d",strlen(s2));
}
void Sosanh(char *s1, char *s2)
{
    if(strcmp(s1,s2)==0)
        printf("\nHai chuoi ki tu bang nhau");
    printf("\nHai chuoi ki tu ko ko bang nhau \n");
}
void NoiKT(char *s1, char *s2)
{
    printf("Tong hai ki tu la %s\n",strcat(s1,s2));
}
void Kt_chuoi(char *s1, char *s2)
{
    strstr(s1,s2) != NULL ? printf("Co chua s1 trong s2\n ") : printf("ko chua s1 trong s2\n ");
    strstr(s2,s1) != NULL ? printf("Co chua s2 trong s1\n ") : printf("ko chua s2 trong s1\n ");
}
int main()x 
{
    char *s1= new char [50];
    char *s2= new char [50];
    NhapChuoi(s1,s2);
    XuatChuoi(s1,s2);
    DoDaiChuoi(s1,s2);
    Sosanh(s1,s2);
    NoiKT(s1,s2);
    Kt_chuoi(s1,s2);
    free(s1);
    free(s2);
}
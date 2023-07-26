#include <stdio.h>
int main ()
{
    FILE *f= fopen("text.txt", "w");
    if (f==NULL)
    {
        printf("Mo tap tin ko thanh cong !");
    }
    else
    {
        char s[] ="Anh Trong wibu";
        int a=10;
        float b=9.5;
        fprintf(f,"%s\n%d\n%.3f",s,a,b);
        printf("Ghi chuoi kich thuoc = [%d] bytes vao file tc",sizeof(s));
    }
    fclose(f);
    return 0;
}
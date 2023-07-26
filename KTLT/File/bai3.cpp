#include <stdio.h>
#include <stdlib.h>
int main ()
{
    FILE *f= fopen("text.txt", "r");
    if (f==NULL)
    {
        printf("Mo tap tin ko thanh cong !");
    }
    else
    {

        char *s=(char *)malloc(7 * sizeof(char));
        int a; float b;
        fscanf(f,"%s\n%d\n%.3f",s,&a,&b);
        printf("Doc cac bien tu file thanh cong, gia tri cac bien : \n");
        printf("s= [%s]\n",s);
        printf("a= [%d]\n",a);
        printf("b= [%.3f]",b);
    }
    fclose(f);
    return 0;
}
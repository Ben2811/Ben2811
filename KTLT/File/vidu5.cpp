#include <stdio.h>
#include <stdlib.h>
void Ham(int a,int b ,char *s)
{
    FILE *f= fopen("binary.bin","wb");
    if(f==NULL){
        printf("Mo tap tin khong thanh cong !");
        }
    else
    {
        fwrite(&a,sizeof(a),1,f);
         fwrite(&b,sizeof(b),1,f);
        fwrite(&s,sizeof(s),1,f);    
        printf("Ghi du lieu vao file thanh cong, dong file !\n");   
        fclose(f);
    }

}
void Ham2()
{
    FILE *f=fopen("binary.bin","rb");
    if(f==NULL)
    {
        printf("Mo tap tin khong thanh coong");
    }
    else
    {
        int a,b;
        char s[7];
        fread(&a,sizeof(a),1,f);
        fread(&b,sizeof(b),1,f);
        fread(&s,sizeof(s),5,f);
        printf("Doc cac bien tu file thanh cong, gia tri cac bien: \n");
        printf("a=[%d]\n",a);
        printf("b=[%d]\n",b);
        printf("s=[%s]\n",s);
        printf("dong file !");
        fclose(f);
    }
}
int main ()
{
    int a=10 , b=20;
    char s[]="Hutech";
    Ham(a,b,s);
    Ham2();
}
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
        int n=10;
        char *s=(char *)malloc(n * sizeof(char));
        fgets(s,n,f);
        if(s==NULL)
        {
            printf("doc chuoi ko thannh cong, dong file \n");
        }
        else
        {
            printf("doc chuoi [%s] thannh cong, dong file \n",s);
        }
    }
    fclose(f);
    return 0;
}
#include <stdio.h>
int main()
{
    int m=1;
    for(int i=4;i>=1;i--)
    {
        for(int j=1;j<m;j++)
        {
            printf(" ");
        }
        m++;
        for(char k='A';k<=i+64;k++)
            printf("%c",k);
        for(char l=i+64-1;l>='A';l--)
            printf("%c",l);
            printf("\n");
    }
    return 0;
}


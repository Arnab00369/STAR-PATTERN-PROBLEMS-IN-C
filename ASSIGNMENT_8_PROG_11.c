
#include <stdio.h>
int main()
{
    int j;
    for(int i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            printf(" ");
        }
        for(char k='A';k<i+64;k++)
            printf("%c",k);
        for(char l=i+64;l>='A';l--)
            printf("%c",l);
            printf("\n");
    }

    return 0;
}


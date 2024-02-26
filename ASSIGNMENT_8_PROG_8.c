#include <stdio.h>
int main()
{
    int j;
    for(int i=1;i<=4;i++)
    {
        for(j=1;j<=4-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<i;k++)
            printf("%d",k);
        for(int l=i;l>=1;l--)
            printf("%d",l);
            printf("\n");
    }

    return 0;
}


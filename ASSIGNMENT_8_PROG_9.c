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
        for(int k=1;k<=i;k++)
            printf("%d",k);
        for(int l=i-1;l>=1;l--)
            printf("%d",l);
            printf("\n");
    }
    return 0;
}

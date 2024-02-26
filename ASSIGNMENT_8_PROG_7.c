#include <stdio.h>
int main()
{
    for(int i=5;i>=1;i--)
    {

        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        for(int k=1;k<=2*5-2*i;k++)
            printf(" ");
             for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");

    }
    return 0;
}

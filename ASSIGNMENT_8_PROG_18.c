#include <stdio.h>
void main()
{
    int sp=10,b;
    for(int i=1;i<=9;i+=2)
    {
         for(b=1;b<=sp;b++)
            printf(" ");
        for(int j=1;j<=i;j++)
            printf(" *");

        sp=sp-2;
        printf("\n\n");
    }
    int s=4;
    for(int i=7;i>=1;i-=2)
    {
         for(b=1;b<=s;b++)
            printf(" ");
        for(int j=1;j<=i;j++)
            printf(" *");

        s=s+2;
        printf("\n\n");
    }
    getch();
}

#include <stdio.h>
void main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i==4||j==4||j==4-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}

#include <stdio.h>
void main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(i==4||(i+j==4&&j<=4)||(j-i==4&&j>4))
                printf(" *");
            else
                printf("  ");
        }
        printf("\n\n");
    }
    getch();
}

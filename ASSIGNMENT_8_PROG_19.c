#include <stdio.h>
void main()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<19;j++)
        {
            if((j%10<=6&&j%10>=2)||(i==2&&j!=9)||((i+j)%10==2&&i!=0)||((i+j)%10==8&&i!=0))
                printf(" *");
            else
                printf("  ");
        }
        printf("\n\n");
    }
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<19;j++)
        {
            if(i==0||((j-i)>=0&&(i+j)<=18))
                printf(" *");
            else
                printf("  ");
        }
        printf("\n\n");
    }

    getch();
}

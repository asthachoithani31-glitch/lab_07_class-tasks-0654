#include <stdio.h>

int main()
{
    int i,j, num=5;

    for (i=1; i<=3; i++)
    {
        for (j=num; j>=1; j--)
        {
            printf("*");
        }
        num=num-2;
        printf("\n");
    }
    return 0;
}

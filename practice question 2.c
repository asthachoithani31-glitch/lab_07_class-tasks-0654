#include <stdio.h>

int main()
{
    int values[5]={101, 205, 103, 205, 101};
    int i, j;

    for (i=0; i<5; i++)
    {
        for (j=i; j<5; j++)
        {
            if ((values[i]==values[j]) && (i!=j))
                printf("Duplicate id: %d\n", values[i]);

        }
    }
    return 0;
}

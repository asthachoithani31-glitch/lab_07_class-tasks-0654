#include<stdio.h>
int main()
{
    int matrix[3][4] = {{10, 22, 35, 41}, {50, 65, 73, 80}, {91, 10, 11, 12}};
    int i, j, min, max, sumRow, sumCol;

    min = matrix[0][0];
    max = matrix[0][0];

    for (i = 0; i < 3; i++)
    {
        sumRow = 0;
        for (j = 0; j < 4; j++)
        {
            if (matrix[i][j] < min)
                min = matrix[i][j];

            if (matrix[i][j] > max)
                max = matrix[i][j];

            sumRow = sumRow + matrix[i][j];
        }
        printf("row %d sum: %d\n", i, sumRow);
    }

    for (j = 0; j < 4; j++)
    {
        sumCol = 0;
        for (i = 0; i < 3; i++)
        {
            sumCol = sumCol + matrix[i][j];
        }
        printf("column %d sum: %d\n", j, sumCol);
    }

    printf("max: %d\n", max);
    printf("min: %d\n", min);
    
    return 0;
}

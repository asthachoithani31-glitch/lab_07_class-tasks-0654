#include<stdio.h>
int main(){
	int i,j,row,col;
	printf("Enter the number of tables needed: ");
	scanf("%d", &row);
	
	printf("Enter the number of time each table need to be displayed: ");
	scanf("%d", &col);
	
	printf("multiplication table (1-%d):\n", row);
    printf("\n");

    for (i=1; i<=row; i++)
    {
        printf("%d:\t", i);
        for (j=1; j<=col; j++)
        {
            printf("%d\t", i*j);
        }
        printf("\n");
    }
    return 0;
}


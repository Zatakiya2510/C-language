#include <stdio.h>
    int main ()
    {
 
        int array[10][10];
        int i, j, r, c, a = 0, sum = 0;
 
        printf("Enetr the rows and cols of the matix \n");
        scanf("%d %d", &r, &c);
 
        if (r == c ) 
        {
 
            printf("Enter element of a[%d][%d]\n",i,j);
            for (i = 0; i < r; ++i)
            {
                for (j = 0; j < c; ++j)
                {
                    scanf("%d", &array[i][j]);
                }
            }
 
            printf("The given matrix is \n");
            for (i = 0; i < r; ++i) 
            {
                for (j = 0; j < c; ++j)
                {
                    printf(" %d", array[i][j]);
                }
                printf("\n");
            }
 
            for (i = 0; i < r; ++i) 
            {
                sum = sum + array[i][i];
                a = a + array[i][r - i - 1];
            }
 
            printf("\nThe sum of the main diagonal elements is = %d\n", sum);
            printf("The sum of the off diagonal elements is   = %d\n", a);
 
        }
 
        else
            printf("The given order is not square matrix\n");
 
    }
#include <stdio.h>
int main()
{
    int rows, cols, row, col, count=0;
    int a[50][50];
     
    printf("Enter Rows and Columns of Matrix\n");
    scanf("%d %d", &rows, &cols);
      
    printf("Enter Matrix of size a[%d][%d]\n", rows, cols);
      
    for(row = 0; row < rows; row++)
	{
        for(col = 0; col < cols; col++)
		{
            scanf("%d", &a[row][col]);
        }
    }
    for(row = 0; row < rows; row++)
	{
        for(col = 0; col < cols; col++)
		{
            if(a[row][col] == 0)
			{
             count++;
            }
        }
    }
     
    if(count > (rows*cols)/2)
	{
        printf("Input Matrix is a Sparse Matrix\n");
    } 
	else
	{
        printf("Input Matrix is Not a Sparse Matrix\n");
    }
    return 0;
}
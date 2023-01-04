#include<stdio.h>
int main()
{
	int i,j,a[3][3],b[3][3],sum[3][3], n=3;
	
	printf("Enter First Element");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\n Enter Element Of a[%d][%d] Index:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	
	printf("Enter Second Element");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\n Enter Element Of b[%d][%d] Index:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\n Sum Of Matrices Is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
}
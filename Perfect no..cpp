#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	printf("Enter value of n:");
	scanf("%d",&n);
	while(i<=n-1)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
		i=i+1;
	}
	if(sum==n)
	{
		printf("Perfect No.");
	}
	else
	{
		printf("Not a Perfect No.");
	}
	printf("\nSum= %d",sum);
	printf("\nExiting Program....");
	return 0;
}
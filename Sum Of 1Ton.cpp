#include<stdio.h>

int main()
{
	int i,sum=0,n;
	printf("Enter Any Number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\n",i);
		sum=sum+i;
	}
	printf("Sum Is : %d\n",sum);
	return 0;
}
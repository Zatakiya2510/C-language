#include<stdio.h>
int main()
{
	int n,number,sum=0,i;
	float avg=0;
	printf("Enter Any Number That You What To Enter :");
	scanf("%d",&n);
	i=n;
	while(n>0)
	{
		printf("Enter Number :");
		scanf("%d",&number);
		sum=sum+number;
		n--;
	}
	avg=(float)sum/i;
	printf("Sum Of Given Number Is : %d",sum);
	printf("\nAverage Of Given Number Is : %f",avg);
	return 0;
}
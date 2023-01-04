#include<stdio.h>
int main()
{
	int n , num[32] , i , positive[32], negative[32],posA=0,negA=0;
	printf("Enter Size Of Array ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter Element Of %d is :",i);
		scanf("%d",&num[i]);
	}
	if(num[i]>0)
		{
			printf("Positive Are :");
			posA++;
		}
		else
		{
			printf("Negative Are :");
			negA++;
			
		}
		return 0;
}
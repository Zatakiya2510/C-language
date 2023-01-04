#include<stdio.h>
int main()
{
	int n,counter=0,i=2,flag=0;
	printf("Enter Any Number:");
	scanf("%d",&n);
	
	while(i<=n-1)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
		i++;
	}
	if(flag==0)
	{
		printf("Number Is Prime");
	}
	else
	{
		printf("Number Is Not Prime");
	}
	return 0;
}
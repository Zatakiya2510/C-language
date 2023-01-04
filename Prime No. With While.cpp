#include<stdio.h>
int main()
{
	int n,counter=0,i=0;
	printf("Enter Any Number:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		if(i%2==0)
		{
			counter++;
		}
		i++;
	}
	if(counter==2)
	{
		printf("Number Is Prime:%d",n);
	}
	else
	{
		printf("Number Is Not Prime:%d",n);
	}
	return 0;
}
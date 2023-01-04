#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter Sides Of Triangle :");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && b==c && c==a)
	{
		printf("Your Triangle Is Equilateral :");
	}
	else if(a==b || b==c || c==a )
	{
		printf("Your Triangle Is Isoceles :");
	}
	else
	{
		printf("Your Triangle Is Sclar :");
	}
	return 0;
}
#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter VAlue of a,b,c :");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c)
	{
		if(b>c)
		{
			printf("B is Second Largest :%d",b);
		}
		else 
		{
			printf("C is Second Largest :%d",c);
		}
	}
	else if(b>a&&b>c)
	{
		if(a>c)
		{
			printf("A is Second Largest :%d",a);
		}
		else
		{
			printf("C is Second Largest :%d",c);	
		}
	}
	else
	{
		if(a>b)
		{
			printf("A is Second Largest :%d",a);
		}
		else
		{
			printf("B is Second Largest :%d",b);
		}
	}
}
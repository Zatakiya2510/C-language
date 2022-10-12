#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enetr First Number");
	scanf("%d",& a);
	printf("Enetr second Number");
	scanf("%d",& b);
	printf("Enetr Third Number");
	scanf("%d",& c);
	if (a>b)
	{
		if (a>c)
		{
			printf("Print a is greater");
		}
		else
		{
			printf("Print c is greater");
		}
	}
	else 
	{
		if (b>c)
		{
			printf("Print b is greater");
		}
		else 
		{
			printf("Print c is greater");
		}
	}
	return 0;
}
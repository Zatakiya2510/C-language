#include<stdio.h>
int main()
{
	int number;
	printf("Enetr Any Number:");
	scanf("%d",& number);
	if (number%2==0)
	{
		printf("Your Number Is Even");
	}
	else
	{
		printf("Your Number Is Odd");
	}
	return 0;
}
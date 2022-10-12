#include<stdio.h>
int main()
{
	int number , digit;
	printf("Enter Any Number");
	scanf("%d",&number);
	digit=number%10;
	if(digit%2==0)
	{
		printf("Your Last Digit Is Even");
	}
	else
	{
		printf("Your Last Digit Is Odd");
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter value of first number");
	scanf("%d",&a);
	printf("Enter value of second number");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Number a is: %d",a);
	printf("Number b is: %d",b);
	return 0;
}
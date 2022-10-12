#include<stdio.h>
int main()
{
	int a,b,T;
	printf("Enter vale of first number");
	scanf("%d",&a);
	printf("Enter vale of second number");
	scanf("%d",&b);
	T=a;
	a=b;
	b=T;
	printf("Number a is: %d",a);
	printf("Number b is: %d",b);
	return 0;
}
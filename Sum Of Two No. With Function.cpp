#include<stdio.h>
int sumOfTwo(int a, int b);
int main()
{
	int a,b,sum;
	printf("Enter Value Of a :");
	scanf("%d",&a);
	printf("Enter Value Of b :");
	scanf("%d",&b);
	sum=sumOfTwo(a,b);
	printf("Sum is: %d",sum);
}
int sumOfTwo(int a, int b)
{
	return a+b;
}
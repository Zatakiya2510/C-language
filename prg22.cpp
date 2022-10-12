#include<stdio.h>
int main()
{
	int a,b,add,sub,multi,div;
	char ch;
	printf("Enter +,-,*,/ :");
	scanf("%c",&ch);
	printf("Enter value of A:");
	scanf("%d",&a);
	printf("Enter value of B:");
	scanf("%d",&b);
	
	if (ch=='+')
	{
		add=a+b;
		printf("Addition is:%d", add);
	}
	else if (ch=='-')
	{
		sub=a-b;
		printf("Subtraction is:%d", sub);
	}
	else if (ch==*)
	{
		multi=a+b;
		printf("Multiplication is:%d", multi);
	}
	else if (ch==/)
	{
		div=a+b;
		printf("Division is:%d", div);
	}
	else 
	{
		printf("Your selected opertator is incorect");
	}
	return 0;
}
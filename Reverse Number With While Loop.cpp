#include<stdio.h>
int main()
{
	int number,digit=0,reverseNumber=0;
	printf("Enter Any Number");
	scanf("%d",&number);
	while(number!=0)
	{
		digit=number%10;
		number=number/10;
		reverseNumber=digit+reverseNumber*10;
	}
	printf("Entered Number In Reverse Order Is :%d", reverseNumber);
	return 0;
}
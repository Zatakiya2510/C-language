#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter Two No. In Which First Is Less And Second Is Greater ");
	scanf("%d%d",&num1,&num2);
	
	while(num1<=num2)
	{
		if (num1%2==0)
		{
			printf("%d\n",num1);
		}
		num1++;
	}
	return 0;
}
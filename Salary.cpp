#include<stdio.h>
int main()
{
	int basicsalary,grosssalary,HRA,DA;
	printf("Enter your salary:");
	scanf("%d",& basicsalary);
	if (basicsalary>=30000)
	{
		HRA=basicsalary*0.30;
		DA=basicsalary*0.95;
	}
	else if(basicsalary>=20000)
	{
		HRA=basicsalary*0.25;
		DA=basicsalary*0.90;
	}
	else if (basicsalary>=10000)
	{
		HRA=basicsalary*0.20;
		DA=basicsalary*0.80;
	}
	else
	{
		printf("Your Salary Is Invalid");
	}
	grosssalary=basicsalary+HRA+DA;
	printf("Your grosssalary is : %d",grosssalary);
	return 0;
}
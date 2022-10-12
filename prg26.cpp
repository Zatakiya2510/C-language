#include<stdio.h>
int main()
{
	float Sub1,Sub2,Sub3,Sub4,Sub5,Per;
	printf("Enter Your First Subject Mark");
	scanf("%d",&Sub1);
	printf("Enter Your Second Subject Mark");
	scanf("%d",&Sub2);
	printf("Enter Your Third Subject Mark");
	scanf("%d",&Sub3);
	printf("Enter Your Fourth Subject Mark");
	scanf("%d",&Sub4);
	printf("Enter Your Fifth Subject Mark");
	scanf("%d",&Sub5);
	Per=(Sub1+Sub2+Sub3+Sub4+Sub5)/5;
	if (Per<=35)
	{
		printf("You Are Fail");
	}
	else if(Per>35 && Per<=45)
	{
		printf("You Are Pass Class");
	}
	else if(Per>=45 && Per<=60)
	{
		printf("You Are Second Class");
	}
	else if (Per>=60 && Per<=70)
	{
		printf("You Are First Class");
	}
	else 
	{
		printf("You Are Distinction");
	}
	return 0;
}
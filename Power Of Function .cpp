#include<stdio.h>
int main()
{
	int x,y,i=1,answer=1;
	printf("Enter Base Of X");
	scanf("%d",&x);
	printf("Enter Exponent Of Y");
	scanf("%d",&y);
	
	while(i<=y)
	{
		answer=x*answer;
		i++;
	}
	printf("%d",answer);
	return 0;
}
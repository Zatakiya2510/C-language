#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,r1,r2,d,real,img;
	printf("Enter Value Of a :");
	scanf("%d",&a);
	printf("Enter Value Of b :");
	scanf("%d",&b);
	printf("Enter Value Of c :");
	scanf("%d",&c);
	
	d=(b*b)-(4*a*c);
	
	if(d>0)
	{
		r1=-b+sqrt(d)/2*a;
		r2=-b-sqrt(d)/2*a;
		printf("Your First Root Is: %d",r1);
		printf("Your Second Root Is: %d",r2);
	}
	else if(d==0)
	{
		r1=-b/2*a;
		r2=r1;
		printf("Your Roots Are : %d",r1,r2);
	}
	else
	{
		real=-b/2*a;
		img=sqrt(d)/2*a;
		printf("%d+i%d",real,img);
		printf("r2  is :%d -i%d",real,img);	
	}
	return 0;
}
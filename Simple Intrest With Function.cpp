#include<stdio.h>

double findSimple(int p,float r,int n);
int main()
{
	int p,n;
	float r;
	printf("Enter Principal Amount:");
	scanf("%d",&p);
	printf("Enter No. Of Years To Store:");
	scanf("%d",&n);
	printf("Enter Rate:");
	scanf("%f",&r);
	printf("Simple Intrest is : %lf",findSimple(p,r,n));
}
double findSimple(int p,float r,int n)
{
	double intrest;
	intrest=(double)p*r*n/100;
	
	return intrest;	
} 
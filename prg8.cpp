#include<stdio.h>
#define pi 3.14
int main()
{
	float r,area;
	printf ("Enter radius of circle");
	scanf("%f", & r);
	area=pi*r*r;
	printf ("Area is % f",area);
}
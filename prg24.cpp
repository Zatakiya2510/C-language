#include<stdio.h>
int main()
{
	char ch;
	printf("Enetr Any Character:");
	scanf("%c",&ch);
	if (ch>=65 && ch<=90)
	{
		printf("Character is Upper Case");
	}
	else if (ch>=97 && ch<=122)
	{
		printf("Character is Lower Case");
	}
	else if (ch>=48 && ch<=57)
	{
		printf("Character is Digit");
	}
	else 
	{
		printf("Entered value is Special Character");
	}
	return 0;
}
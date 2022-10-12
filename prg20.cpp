#include<stdio.h>
int main()
{
	char v;
	printf("Enter Any Character");
	scanf("%c",&v);
	if(v=='a'|| v=='e'|| v=='i'|| v=='o'|| v=='u'|| v=='A'|| v=='E'|| v=='I'|| v=='O'|| v=='U')
	{
		printf("Your Character is Vowel");
	}
	else
	{
		printf("Your Character is Consonant");
	}
	return 0;
}
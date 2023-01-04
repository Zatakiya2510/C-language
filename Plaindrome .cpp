#include <stdio.h>
int main() {
  int n, reverse = 0, remainder, real;
    printf("Enter an integer: ");
    scanf("%d", &n);
    real = n;

    while (n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }

    if (real == reverse)
    	{
			printf("%d is a palindrome.", real);
		}	
    else
        {
        	printf("%d is not a palindrome.", real);
		}

    return 0;
}
#include <stdio.h>

int main()
{
	int x,reversed=0,original;
	printf("Enter a number:");
	scanf("%d",&x);
	
	if(x<=0)
	{
	    printf("hence it is in negative\nThe statement is false");
	}

	original=x;
	while(x>0)
	{
		reversed=reversed*10+x%10;
		x=x/10;
	}
	if(original==reversed)
	{
		printf("%d is a palindrome\nHence it is true\n.",original);
	}
	else
	{
		printf("%d is not a palindrome\nHence it is false\n.",original);
	}
	return 0;
}
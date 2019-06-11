#include<stdio.h>
main()
{
	int num;
	printf("Check the number does it odd or even\n");
	printf("Please enter the number to check");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("The given number is even");
	}
	else
	{
		printf("The given number is odd");
	}
	
}

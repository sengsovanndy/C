#include<stdio.h>
main()
{
	int n1,n2,n3;
	printf("Check which is the largest number\n");
	printf("Enter your first number");
	scanf("%d",&n1);
	printf("Enter the second number");
	scanf("%d",&n2);
	printf("Enter the third number");
	scanf("%d",&n3);
	if(n1>n2&n1>n3)
	{
		printf("The largest number is the first number%d",n1);	
	}
	else if(n1>n2&n1<n3)
	{
		printf("The largest number is the third number%d",n3);
	}
	else if(n1<n2&n1>n3)
	{
		printf("The largest number is the second number%d",n2);
	}
	else if(n1<n2&n2<n3)
	{
		printf("The largest number is the third number%d",n3);
	}
	else if(n1<n2&n2>n3)
	{
		printf("The largest number is the second number%d",n2);
	}
	else if(n1==n2&n1>n3)
	{
		printf("The largest number are the first number and the second number%d",n1);
	}
	else if(n1==n2&n1<n3)
	{
		printf("The largest number is the third number%d",n3);
	}
	else if(n1==n3&n1>n2)
	{
		printf("The largest number are the first number and the third number%d",n1);
	}
	else if(n1==n3&n1<n2)
	{
		printf("The largest number is the second number%d",n2);
	}
	else if(n2==n3&n2>n1)
	{
		printf("The largest number are the second number and the third number%d",n2);
	}
	else if(n2==n3&n2<n1)
	{
		printf("The largest number is the first number%d",n1);
	}
	else if(n1==n2,n3)
	{
		printf("All number are equal%d",n1);
	}
}

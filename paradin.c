#include<stdio.h>
main()
{
	int n,r,sum,temp;
	printf("enter the value for n");
	scanf("%d",&n);
	temp=n;
	sum=0;
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	if(temp==sum)
	{
		printf("the given number is palimdrome number");
	}
	else
	{
		printf("the given number is not the palindrome nunber");
	}
}

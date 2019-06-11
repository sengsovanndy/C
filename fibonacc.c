#include<stdio.h>
main()
{
	int a=0,b=1,c,i,n;
	printf("enter the value for n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("\n%d",c);
	}
}

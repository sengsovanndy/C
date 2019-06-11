#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c,delta;
	float o,t,x;
	printf("enter your value in the correct form\n");
	printf("ax^2+bx+c\n");
	printf("enter the number for a=");
	scanf("%d",&a);
	printf("enter the number for b=");
	scanf("%d",&b);
	printf("enter the number for c=");
	scanf("%d",&c);
	delta=(b*b)-(4*a*c);
	printf("the result of the delta is equal=%d\n",delta);
	if(delta!=0)
	{
		if(delta>0)
		{
		printf("this equation have two roots\n");
		o=(-b-sqrt(delta))/(2*a);
		printf("the first root of the equation is equal x1=%f\n",o);
		t=(-b+sqrt(delta))/(2*a);
		printf("the second root of the equation is equal x2=%f\n",t);
		}
		else
		{
		printf("The equation has no root in R");
		}
	}
	else
	{
		printf("this equation has two roots but both roots are equal\n ");
		x=(-b/(2*a));
		printf("the both root of the equation are equal x1=x2=%f",x);	
	}
}
	
	

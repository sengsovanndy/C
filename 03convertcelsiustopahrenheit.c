#include<stdio.h>
main()
{
	float a,res;
	printf("Convert from celsius to fahrenheit\n");
	printf("Enter the number of celsius");
	scanf("%f",&a);
	res=(a*9/5)+32;
	printf("The result is=%f",res);
}

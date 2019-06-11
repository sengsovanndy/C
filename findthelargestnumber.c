//find the largest number
/*#include<stdio.h>
main()
{
	int i,large,arr[5];
	printf("enter the five value to find the largest number\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	large=arr[0];
	for(i=1;i<5;i++)
	{
		if(large<arr[i])
		{
			large=arr[i];
		}	
	}	
	printf("the largest number is%d",large);
}*/

#include<stdio.h>
main()
{
	int i,arr[5],small;
	printf("enter your five value to find the smallest\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	small=arr[0];
	for(i=1;i<5;i++)
	{
		if(small>arr[i])
		return small=arr[i];
	}
	printf("the smallest number is%d",small);
}

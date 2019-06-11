#include<stdio.h>
main()
{
	char a;
	printf("Check the character is it vowel or consonant\n");
	printf("Enter the character to check");
	scanf(" %c",&a);
	if(a=='a' || a=='e'|| a=='i'|| a=='o'|| a=='u')
	{
		printf("The character is vowel");
	}
	else if(a=='A' || a=='E'|| a=='I'|| a=='O'|| a=='U')
	{
		printf("The character is vowel");
	}else
	printf("The character is consonant");
}

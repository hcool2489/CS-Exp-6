#include<stdio.h>
void main()
{
	char ch;
	printf("Enter any character: ");
	scanf("%c",&ch);
	
	if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
	{
		printf("%c is an Alphabet\n",ch);
	}
	else if(ch>='0'&&ch<='9')
	{
		printf("%c is a Number\n",ch);
	}
	else
		printf("%c is a Special Character\n",ch);
}

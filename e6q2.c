#include<stdio.h>
void main()
{
	int m,p,c,t;
	printf("Enter the marks in Maths, Physics and Chmistry: ");
	scanf("%d%d%d",&m,&p,&c);
	t=m+p+c;
	if((m>=65)&&(p>=55)&&(c>=50)&&(t>=180))
		printf("Eligible\n");
	else
		printf("Not Eligible\n");
}

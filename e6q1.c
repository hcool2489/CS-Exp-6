#include<stdio.h>
void main()
{
	int x,y;
	printf("Enter x: ");
	scanf("%d",&x);
	printf("Enter y: ");
	scanf("%d",&y);
	
	printf("\n\tPoints %d,%d are at ",x,y);

	if(x==0&&y==0)
		printf("origin");
	else if(x>0&&y>0)
		printf("1st Quad");
	else if(x<0&&y>0)
		printf("2nd Quad");
	else if(x<0&&y<0)
		printf("3nd Quad");
	else if(x>0&&y<0)
		printf("4nd Quad");

	printf("\n\n\n");
}

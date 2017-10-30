#include<stdio.h>
void main()
{
	int h,m,s,t;
	printf("Enter Starting time(hh:mm:ss): ");
	scanf("%d:%d:%d",&h,&m,&s);
	t = (h * 3600) + (m * 60) + s;
	printf("Enter Finishing time(hh:mm:ss): ");
	scanf("%d:%d:%d",&h,&m,&s);
	t = ((h * 3600) + (m * 60) + s) - t;
	printf("Enter time to debug(hh:mm:ss): ");
	scanf("%d:%d:%d",&h,&m,&s);
	t = t + ((h * 3600) + (m * 60) + s);
	h = t / 3600;
	m = (t % 3600) / 60;
	s = (t % 3600) % 60;
	printf("Total Time taken to code: %d:%d:%d \n",h,m,s);
}

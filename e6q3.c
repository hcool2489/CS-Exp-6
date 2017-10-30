#include<stdio.h>
void main()
{
	float x,t,tb;
	printf("Enter units consumed: ");
	scanf("%f",&x);
	if(x<=50)
	{
		t=(x*.5);
		printf("Your bill is %.2f \n",t);
	}
	else if((x>=50)&&(x<=150))
	{
		t=((50*.5)+(x-50)*.75);
		printf("Your bill is %.2f \n",t);
	}
	else if((x>=150)&&(x<=250))
	{
		t=((50*.5)+(100*.5)+(x-150)*1.2);
		printf("Your bill is %.2f \n",t);
	}
	else
	{
		t=((50*.5)+(100*.5)+(100*1.2)+(x-250)*1.5);
		printf("Your bill is %.2f \n",t);
	}

	tb=(t+(20*t)/100);
	printf("Your bill with surcharge %.2f \n",tb);
}

#include<stdio.h>
void main()
{
	float cp,sp,pp,lp,l,p;
	printf("Enter the cp and sp: ");
	scanf("%f%f",&cp,&sp);
	if(cp>sp)
	{
		l=(cp-sp);
		printf("Loss of %.2f \n",l);
		lp=((cp-sp)*100)/cp;
		printf("Loss percentage %.2f \n",lp);
	}
	else if(sp>cp)
	{
		p=(sp-cp);
		printf("Profit of %.2f \n",p);
		sp=((sp-cp)*100)/cp;
		printf("Profit percentage %.2f \n",sp);
	}
}

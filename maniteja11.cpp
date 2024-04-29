#include<stdio.h>
main()
{
	int m1,m2,m3,m4;
	float per;
	printf("enter the marks of the student:\n");
	scanf("%d%d%d%d",&m1,&m2,&m3,&m4);
	per=(m1+m2+m3+m4)/4.0;
	printf("percentage=%f\n",per);
	if(per>=90)
	{
		printf("grade=A\n");
		
	}
	else if(per>=75)
	{
		printf("grade=B\n");
		
	
	}
	else if (per>=45)
	{
		printf("garde=C");
		
	}
	else
	{
		printf("student is fail:\n");
	}
}

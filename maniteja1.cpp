#include<stdio.h>
main()
{
	int std1,std2,std3;
	printf("Enter the total values of the 3 students:\n ");
	scanf("%d%d%d",&std1,&std2,&std3);
	{
	if(std1>40)
	{
		printf("std1 is pass\n");
		if(std1>80)
		printf("std1 got the A grade\n");
		else
		printf("std1 got the B grade\n");	
                	}
         else 
 printf("std1 is fail\n");
     }
{
		if(std2>40)
	
	{
			printf("std2 is pass\n");
		if(std2>80)
		printf("std2 got the A grade\n");
		else 
		printf("std2 got the B grade\n");
}
else 
printf("std2 is fail\n");

}
{
	if(std3>40)
	
	{
			printf("std3 is pass\n");
		if(std3>80)
		printf("std3 has got the A grade\n");
		else 
		printf("std3 has got the B grade \n");
	
	}
	else 
	printf("std3 is fail\n");
	
}
	}


#include<stdio.h>
main()
{
	int size,r,c;
	printf("Enter the size:\n");
	scanf("%d",&size);
	r=1;
	while(r<=size)
	{
		c=1;
		while(c<=size)
		{
		printf("*");
		c++;
		}		
	
	printf("\n");
	r++;
}
}

#include<stdio.h>
main()
{
	int r,c,sp,n;
	printf("Enter n value:\n");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		for(sp=1;sp<=n-r;sp++)
		printf(" ");
		for(c=1;c<=r;c++)
		printf("*");
		for(c=1;c<=r;c++)
		printf("*");
		printf("\n");
		
	}
}

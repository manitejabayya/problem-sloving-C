#include<stdio.h>
main()
{
	int a[50],n,search,r;
	printf("Enter the size of the array:\n");
	scanf("%d",&n);
	printf("Enter the %d elements to the array:\n",n);
	for(r=0;r<n;r++)
	scanf("%d",&a[r]);
	printf("Enter the element to search :\n");
	scanf("%d",&search);
	for(r=0;r<n;r++)
	if(a[r]==search)
	{
		printf("%d is found ",n);
		
	}
	else 
	printf("%d is not found",n);
}

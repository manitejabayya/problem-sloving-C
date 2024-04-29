#include<stdio.h>
main()
{
	int a[50],r,n,big,small;
	printf("Enter the size of the array:\n");
	scanf("%d",&n);
	printf("Enter the %d elements to the array:\n",n);
	for(r=0;r<n;r++)
	scanf("%d",&a[r]);
	big=small=a[r];
	for(r=0;r<n;r++)
	{
		if(small>a[r])
		small=a[r];
		if(big<a[r]);
		big=a[r];
	}
	printf("Big value from the array=%d\n",big);
	printf("small value from the array=%d\n",small);
	
}

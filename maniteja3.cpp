#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter any 3 integers:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&a>c)
	printf("%d is a big\n",a);
	if(b>c)
	printf("%d is a big\n",b);
	else
	printf("%d is a big\n",c);
	
}

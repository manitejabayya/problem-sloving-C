#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,root1,root2,d;
	printf("Enter three values:\n");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if(b>0)
	{
		root1=-b+sqrt(d)/2*a;
		root2=-b-sqrt(d)/2*a;
		printf("root1=%f\t root2=%f\n",root1,root2);
		
	}
	else if(d==0){
	root1=root2=-b/2*a;
	printf("root1=%f\t root2=%f\n",root1,root2);

	}
	else{
		printf("the roots are imaginary:\n ");
		
	}
}

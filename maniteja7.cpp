#include<stdio.h>
int main()
{
	int marks;
	printf("Enter marks of a subject:\n");
	scanf("%d",&marks);
	if (marks>=40)
	goto pass;
	else
	goto fail;
	pass:{
	printf("pass\n");
  return 0;
	
	}
	fail:{
	printf("fail\n");
	return 0;
	}
}

#include<stdio.h>
#include<math.h>
main()
{
	int A[50][50],B[50][50],add[50][50];
	 int r1,r2,c1,c2,r,c;
	 printf("Enter the size ofarray A:\n");
	 scanf("%d%d",&r1,&c1);
	 printf("Enter the size of the array B:\n ");
	 scanf("%d%d",&r2,&c2);
	 	 if((r1==r1)&&(c1==c2))
	 {
	 	printf("Enter %d elements for array A :\n",r1*c1);
	 	for(r=0;r<r1;r++)
	 	for(c=0;c<c1;c++)
	 	scanf("%d",&A[r][c]);
	 	printf("Enter %d elements for array B:\n",r2*c2);
	 	for(r=0;r<r2;r++)
	 	for(c=0;c<c2;c++)
	 	scanf("%d",&B[r][c]);
	 	for(r=0;r<r1;r++)
	 	for(c=0;c<c1;c++)
	 	add[r][c]=A[r][c]+B[r][c];
	 	printf("result=\n");
	 	for(r=0;r<r1;r++)
	 	{
	 		for(c=0;c<c1;c++)
	 		printf("%d \t",add[r][c]);
	 		printf("\n");
	 		
		 }
		 
	 }
	 else
	 printf("subraction  is not possible \n");
	 
}

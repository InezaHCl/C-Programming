#include<stdio.h>
 main()
{ int a[3][3],i,j;
	int *p;
	p= &a[3][3];
	int sum=0;
	
		printf("Input nine elements in the matrix:\n");
	for(i=0; i<3 ;i++)
	{ 
	for (j=0; j<3; j++)
		{
		printf("Element - [%d][%d] :",i,j);
		scanf("%d",&a[i][j]);
		}
	}
	
printf("The matrix is:\n");
	for(i=0; i<3; i++)
	{
		printf("\n");
		for(j=0; j<3; j++)
		{
		printf("%d\t",a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		sum= sum+a[i][i];
	}
	printf("\n The Sum of Diagonal Elements of a Matrix =  %d", sum );
}

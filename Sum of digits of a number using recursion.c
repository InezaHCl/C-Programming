//Find the sum of digits of a number using recursion
#include<stdio.h>
int sum();//fuction prototyp
main()
{
	//core functionality
	sum();//function call
}

int sum()//fuction defintion
{ int a=0,b=0,c=0,d=0;
	printf("Input numbers:");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	printf("Sum of the digits:%d",(a+b+c+d));
}

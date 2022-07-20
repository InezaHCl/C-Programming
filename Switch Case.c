#include <stdio.h>
int main()
{	short int choice=0;
	printf("Select one number:\n1 2 3 4 5\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 : printf("Food item:Pizza\nPrice:Rs 239");break;
		case 2 : printf("Food item:Burger\nPrice:Rs 129");break;
		case 3 : printf("Food item:Pasta\nPrice:Rs 179");break;
		case 4 : printf("Food item:French Fries\nPrice:Rs 99");break;
		case 5 : printf("Food item:Sandwich\nPrice:Rs 149");break;
	default:printf("Since i am not too great with numbers other than 0 and 1");
	}
return 0;
}

//W.A.P. to input your age and check it is valid for voting?
#include<stdio.h>
int main()
{
	int age;
	printf("input your age:-");
	scanf("%d",&age);
	if(age>18)
	{
		printf("you are eligible for voting");
	}
	else
	{
		printf("you are not eligible for voting");
	}
}

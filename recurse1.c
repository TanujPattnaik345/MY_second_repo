#include<stdio.h>
int factorial(int n)
{
	if(n==0)
	{return 1;
}
	else{
		int fact=n*factorial(n-1);
		return fact;
	}
}

int main()
{
int num;
printf("enter the the number u want to find the factorial");
scanf("%d",&num);
int fact=factorial(num);
printf("The factorial of the number%d \n:",fact);
}

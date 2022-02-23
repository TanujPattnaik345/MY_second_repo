#include<stdio.h>
long int sumofDigits(int n)
{
	if(n==0)
	{return 0;
}
	else
	{
		 long int rem=n%10;
		long int sum=rem+sumofDigits(n/10);
		return sum;
	}
}

int main()
{
 long int num;
printf("enter the the number u want to find the sum of indiviual");
scanf("%d",&num);
long int fact=sumofDigits(num);
printf("The sum of the number%d \n:",fact);
return 0;
}

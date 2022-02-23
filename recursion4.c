#include<stdio.h>
int fibbo(int n)
{  
	if(n==0)
	{	return 0;
}
else if(n==1)
{
	return 1;
}
	else{
	     return fibbo(n-1)+fibbo(n-2);
	}
}

int main()
{
int num;
printf("enter the the number  \n");
scanf("%d",&num);
int fib=fibbo(num);
printf("The number of the digits %d \n:",fib);
}

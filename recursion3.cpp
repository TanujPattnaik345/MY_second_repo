#include<stdio.h>
int split(int n)
{ static int count=0;
	if(n==0)
	{	return count;
}
	else{
	     
		count++;
          split(n/10);
	}
}

int main()
{
int num;
printf("enter the the number  \n");
scanf("%d",&num);
int fact=split(num);
printf("The number of the digits %d \n:",fact);
}

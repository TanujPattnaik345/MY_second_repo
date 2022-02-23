#include<stdio.h>
int power1(int n1,int n2)
{
	if(n1==0)
	{return 1;
}
	else{
		int power=n2*power1(n1-1,n2);
		return power;
	}
}

int main()
{
int num,n;
printf("enter the the power u want to find the of 2 \n");
scanf("%d",&num);
scanf("%d",&n);
int fact=power1(num,n);
printf("The power of the 2 %d \n:",fact);
return 0;
}

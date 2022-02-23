#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	int i;
	float sum=0;
	float mean;
	printf("Enter the number of numbers you want to find the mean:\n");
	scanf("%d",&num);
	int a[num];
	printf("Enter the numbers you want to find the mean:\n");
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	       sum=sum+(1.0/a[i]);
     	mean=num*pow(sum,-1);
}
	printf("The harmonic mean of numbers are\n %f",mean);
}

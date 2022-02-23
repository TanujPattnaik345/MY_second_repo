#include<stdio.h>
int main()
{
	int a[100][100],b[100][100];
	int c[100][100],m,n,p,q,i,j,k;
	printf("Enter the row and column  for Matrix A:\n");
	scanf("%d%d",&m,&n);
	printf("Enter the elements: \n");
	for(i=0;i<m;i++)
	{printf(" \n");
		for(j=0;j<n;j++)
		scanf("%d",a[i][j]);
	}
	printf("The 1st matrix are:");
		for(i=0;i<m;i++)
	  {printf(" \n");
		for(j=0;j<n;j++){
		printf("%d",a[i][j]);
	}
}
	
		
	printf("Enter the number of rows and columns for Matrix B: \n");
	scanf("%d%d",&p,&q);
	
	for(i=0;i<p;i++)
	{printf(" \n");
		for(j=0;j<q;j++)
		scanf("%d",a[i][j]);
	}
	printf("The 2nd matrix are:");
	for(i=0;i<p;i++)
	{printf(" \n");
		for(j=0;j<q;j++)
		printf("%d",a[i][j]);
	}
	if(n==p)
	{
	for(i=0;i<m;i++)
	{
	for(j=0;j<q;j++){

		c[i][j]=0;
		for(k=0;k<n;k++)
		c[i][j]+=a[i][k]*b[k][j];
	}
}
}
printf("the product matrix is: \n");
for(i=0;i<m;i++)
{ printf(" \n");
for(j=0;j<q;j++)
printf("%d",c[i][j]);
}
return 0;
}


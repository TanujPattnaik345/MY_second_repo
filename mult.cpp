#include<stdio.h> 
int main(void) 
{ 

int a[10][10]; /* initializing matrices to '0' */ 
int b[10][10]; 
int c[10][10]; /*matrix-c for multiplication*/ 

/*r1,c1 are rows and coloumns for matrix-a.r2,c2 for matrix-b.*/ 
int r1,c1,r2,c2; 
int i,j,k; 

printf("enter the no of ROWS and COLOUMNS for MATRIX-A\n"); 
scanf("%d %d",&r1,&c1); 
printf("enter the no of ROWS and COLOUMNS for MATRIX-B\n"); 
scanf("%d %d",&r2,&c2); 

if(c1==r2) 
{ 

printf("matrix multiplication possible\n\nenter numbers in MATRIX-A\n");


/* to enter numbers in matrix-a*/ 
for(i=0;i<r1;i++) 
for(j=0;j<c1;j++) 

scanf("%d",&a[i][j]);


printf("enter numbers in MATRIX-B\n");


/* to enter numbers in matrix-b*/


for(i=0;i<r2;i++)
for(j=0;j<c2;j++) 

scanf("%d",&b[i][j]);

for(i=0;i<r1;i++) 
for(j=0;j<c2;j++) {
*(*(c+i)+j)=0;
}
/*for matrices multiplication*/ 
for(i=0;i<r1;i++) 
for(j=0;j<c2;j++) 
for(k=0;k<c1;k++) 
*(*(c+i)+j)+=*(*(a+i)+k)*(*(*(b+k)+j)); 


printf("result of multiplication of matrices is \n"); 
/*to display as matrix format*/ 
for(i=0;i<r1;i++) 
{ 
printf("\n"); 
for(j=0;j<c2;j++) 
printf("%d\t",*(*(c+i)+j)); 
} 


} //if 

else 
printf("MATRIX multiplication not Possible\n"); 
return 0; 
}
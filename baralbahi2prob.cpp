#include<bits/stdc++.h>

using namespace std;

int main(){

int num;  
cin>>num;

while(num--)
{
int g1, p2;            

cin>>g1>>p2;

int no;        

cin>>no; // number of participant

int cost1 = 0;

int a[no][2];
for(int i=0;i<no;i++){
	for(int j=0;j<2;j++){
		cin>>a[i][j];
	}
}
for(int i=0;i<no;i++)
{
	if(a[i][0]==1){
		cost1= cost1+ g1;
	}
	if(a[i][1]==1){
		cost1 =cost1 + p2;
	}
}
int cost2=0;
for(int i=0;i<no;i++)
{
	if(a[i][0]==1){
		cost2 = cost2 + p2; 
	}
	if(a[i][1]==1){
		cost2 = cost2 + g1;
	}
}
cout<<min(cost1,cost2)<<endl;
}


return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{   int a[5];
cout<<"enter the elements of the array"<<endl;
for(int i=0;i<5;i++)
cin>>a[i];
int zindex=0;
for(int i=0;i<5;i++){
    if(a[i]!=0){
        swap(a[i],a[zindex]);
        zindex++;
    }
}
for(int i=0;i<5;i++)
{
    cout<<a[i]<<"  ";
    
}
cout<<endl;
return 0;
}
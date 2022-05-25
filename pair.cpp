#include<bits/stdc++.h>

using namespace std;

int main()
{

vector<pair<int,int>> pa;
int num;
int i,j;
int total=0;
cout<<"Enter the no. pair\n";
cin>>num;
for(auto it=0;it<num;it++)
{
    cout<<"enter the elements:"<<it+1<<endl;
    cin>>i>>j;
    pa.push_back(make_pair(i,j));
}
cout<<endl;
for(auto it=0;it<num;it++){
    cout<<pa[it].first<<" "<<pa[it].second;
    cout<<endl;
}
for(auto it=0;it<num;it++){
if(pa[it].first == 5){
cout<<" yes it is working"<<endl;
total=total+20;
}
}
cout<<endl;
cout<<total;
return 0;
}

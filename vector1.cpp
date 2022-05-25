#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    v.emplace_back(1);
    v.emplace_back(2);
    v.emplace_back(12);
    v.emplace_back(2);
    v.emplace_back(34);
    v.emplace_back(45);
    v.emplace_back(67);
    v.emplace_back(75);
    
    for(auto it:v)
    sort(v.begin(),v.end());
    for(auto it:v)
    cout<<it<<" ";
    return 0;

}
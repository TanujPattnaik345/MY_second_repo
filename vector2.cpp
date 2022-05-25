#include<bits/stdc++.h>
using namespace std;
int main()
{
    array<int,10>arr{1,2,3,4,5,6,7,8,9,10};
    // arr.insert(0);
    // arr.insert(1);
    // arr.insert(2);
    // arr.insert(3);
    // arr.insert(5);
    // arr.insert(6);
    // arr.insert(7);
    // arr.insert(8);
    // arr.insert(9);
   


    for(auto it=arr.rbegin();it!=arr.rend();it++)
    {
        cout<<*it;
        cout<<endl;
    }

//  array<int,3>arr;
//     arr.fill(1);
//     for(auto it=arr.begin();it!=arr.end();it++)
//     {
//         cout<<*it<<" ";
//     }

// string str="xhegfhty";
// for(auto it:str)
// cout<<it<<" ";


    return 0;
}
    
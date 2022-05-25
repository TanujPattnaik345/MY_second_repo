#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i,num;
    int *p;
    p=arr;
    cout<<"Enter the element to be searched:\n";
    cin>>num;
    for (i=0;i<10;i++)
    {
       if(*p==num)
       {
           cout<<"\n"<<num<<"is present in the array";
            break;
       }
    
    else if(i==9)
    cout<<"\n"<<num<<"is not present in the array";
   
    p++;
}
}
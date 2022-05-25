#include <iostream>
using namespace std;
int main() 
{
	int n,b1,b2,p,left,right,rcount=0,lcount=0,sum=0;
	cin >> n;
    for(int i=0;i<n;i++){
        cin>>b1>>b2>>p;
        if(b1<b2){
            b1=b1+b2;
            b1=b1-b2;
            b2=b1-b2;
        }
        for(int j=0;j<p;j++){
            cin>>left>>right;
            if(left==1)
            lcount++;
            if(right==1)
            rcount++;
        }
        if(lcount>=rcount)
        sum=sum+(lcount*b2)+(rcount*b1);
        else
        sum= sum+(rcount*b2)+(lcount*b1);
        cout<<sum<<endl;
        sum=lcount=rcount=0;
    }
}
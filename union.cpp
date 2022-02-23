#include<iostream>
using namespace std;
int main()
{
	int a[4],b[4];
	int i,j;
	cout<<"enter the elements\n";
	for(i=0;i<4;i++)
	{
      cin>>a[i];

     }
	cout<<"enter the  2nd elements\n";
	for(i=0;i<4;i++)
    {
	cin>>b[i];
    }  
    i=0,j=0;
    while(i<4&&j<4)
    {
    	if(a[i]<b[j])
    	 cout<< a[i++];
    	 
    	 else if(b[j]<a[i])
    	 cout<<b[j++];
    	 else
    	 cout<<a[i++];
    	 j++;
    	 
	}
	
        while (i < 4)
        cout<< a[i++];
         while (j < 4)
        cout<<b[j++];
        
        
        return 0;
        
    }


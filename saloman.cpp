#include <iostream>
using namespace std;
int main() {
	int n,b1,b2,p,temp,left,right,sum1=0,sum2=0;
	cin >> n;
	for(int i=0;i<n;i++) 
	{
		 cin>> b1 >> b2;
         cin>>p;
		 sum1=0;
			sum2=0;		
		   for(int j=0;j<p;j++)
	       { 
			 cin>> left >> right; 
			 if(left==1)
				sum1 += b1;
			 if(right==1)
				sum1 += b2;

				if(left==1)
				sum2= sum2+b2;

				if(right==1)
				sum2 = sum2+b1;
		    }
			cout<<min(sum1,sum2)<<endl;
			
	}

	
}
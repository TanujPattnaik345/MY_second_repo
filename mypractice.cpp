#include <bits/stdc++.h>
using namespace std;
long long int gcd(long long int ans,long long int b){
  while(b!=0){
	  long long int temp=ans % b;
	  ans=b;
	  b=temp;
  }
  return ans;
}
int main() {
	long long int num;
	long long int a[1000];
	long long int mult =1;
	cin >> num;
	for(int i=0;i<num;i++)
	 {
		 cin>>a[i];
	 }
	 for(int i= 0;i<num;i++){
		 mult *=a[i]%1000000007;
	 }
	 long long int ans= a[0];
	 for( int i=1;i<num;i++){
		 ans= gcd(ans,a[i]);
	 }
	 long long int val= pow(mult,ans);
	 long long int monk= val%1000000007;
	 cout<<monk;
}
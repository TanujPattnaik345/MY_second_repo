#include <bits/stdc++.h>


 

using namespace std;

long long int gcd(long long int a,long long int b)

{

    if(b==0)

    return a;

    else

    return gcd(b,a%b);

}

long long int modularExponentiation(long long int x,long long int n)
{

long long int result=1;

while(n>0)

{

if(n % 2 ==1)

result=(result * x);

x=(x*x);

n=n>>1;   //   n/2;

}

return result;

}

int main() {

    long long int mod=1000000007;

    long long int num;

    cin >> num;                                     

    long long int arr[num];

    long long int product=1;

    for(int i=0;i<num;i++)

    {

cin>>arr[i];

        product=((product)*(arr[i]))%mod;

    }

    long long int res=arr[0];

    for(int i=1;i<num;i++)

    {

        res=gcd(res,arr[i]);
    }

    cout<<modularExponentiation(product,res);

    return 0;

}
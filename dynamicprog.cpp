#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

int dp[N];
//TOP DOWN
int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
        //memoisesation
        //O(2^N)--.O(N) or O(N^2)
        //O(N!)-->O(2^N) BIT MASKING MEIN USE HOTI HAI
        if(dp[n]!=-1) return dp[n];

    return dp[n]= fib(n - 1) + fib(n - 2);
}

int main()
{
    memset(dp, -1, sizeof(dp));//koi bi value dalke aap array ko fill nhi kar sakte ho
    //specifically ye sirf -1 ke liye hi hai value assigned
    // eise value ho jo unme na ho
    // dp array ko ham -1 se fill kardete hai dp[i] -1 hai basically i
    //  ke value calcullate nhi hui hai but agr 
    //'i' ki value -1 nhi hai to value iske lye alredy calculate ho chuki hai
    int n;
    cin >> n;
    //bottom up approach
   dp[0]=0;
   dp[1]=1;
    for(int i=2;i<=n;++i){
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout << fib(n);
}
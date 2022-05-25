#include<bits/stdc++.h>
using namespace std;

int solution (vector<vector<char> > A, int K) {
   // Write your code here
   int cnt =0;


for(int j=0;j<A.size();j++)

{

for(int l=0;l<A.size();l++)

{

if(A[j][l]=='P')

{

for(int k=l+1;k<=K+l;k++)

{

if(k==A.size())

break;

if(A[j][k]=='T')

{ cnt++; A[j][k] = '\0'; break; }

 

}

}

else if(A[j][l]=='T')

{

for(int k=l+1;k<=K+l;k++)

{

if(k==A.size())

break;

if(A[j][k]=='P')

{ cnt++; A[j][k] = '\0'; break; }

 

}

}

}

}

return cnt;

  
}

int main() {
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        int N;
        cin >> N;
        int K;
        cin >> K;
        vector<vector<char> > A(N, vector<char>(N));
        for (int i_A=0; i_A<N; i_A++)
        {
        	for(int j_A=0; j_A<N; j_A++)
        	{
        		cin >> A[i_A][j_A];
        	}
        }

        int out_;
        out_ = solution(A, K);
        cout << out_;
        cout << "\n";
    }
}
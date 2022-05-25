#include <iostream>
using namespace std;
int main(){

    long int n,i;

    cin>>n;


 

     char village[n];

    for(i=0;i<n;i++){
        cin>>village[i];
    }


 

    for(i=0; i<n; i++)
    {

        if(village[i]=='H' && village[i+1]=='H'){

            cout<<"NO";

            break;

        }


 

        if(village[i]=='.'){

            village[i]='B';

        }

    }


 

    if(i==n){

        cout<<"YES"<<endl;
        for(i=0;i<n;i++){
            cout<<village[i];
        }

    }


 

    return 0;
}
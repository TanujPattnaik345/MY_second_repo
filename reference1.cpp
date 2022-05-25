#include<iostream>
using namespace std;
const int & max(int &a){
    a++;
    return a;
}
int main(){
    int a=10;
     cout<< max(a);
     return 0;
}
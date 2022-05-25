#include<iostream>
using namespace std;
typedef void (*func)(int,int);
void add(int a,int b){
    cout<<"Addition  is:"<<a+b;
}
void subtract(int a,int b){
    cout<<"The subtraction is :"<<a-b;
}

int main(){
func ptr;
ptr=&add;
ptr(1,2);
cout<<endl;
ptr=&subtract;
ptr(14,10);
return 0;
}
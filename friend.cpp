#include<iostream>
using namespace std;
class rectangle{
    int length;
    int breadth;
    public: 
    rectangle(int a,int b){
        length=a;
        breadth=b;
    }
    rectangle(rectangle& temp){
        cout<<"Copy constructor is callled";
        this->length=temp.length;
        this->breadth=temp.breadth;
        
    }
    friend int getArea(rectangle);

};

int getArea(rectangle b){
    b.length+=10;
    b.breadth+=20;
    return b.length*b.breadth;
}
int main(){
    rectangle b1(20,10);
      cout<<"The area of the rectangle is"<<getArea(b1)<<endl<<endl;
     rectangle b2=b1;//copy constructor called
      cout<<"The area of the rectangle is"<<getArea(b2)<<endl;
    return 0;
}
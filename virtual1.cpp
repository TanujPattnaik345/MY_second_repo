#include<iostream>
#include<cstring>
using namespace std;
class media{
    protected:
    char title[50];
    float price;
    public:
    media(char* s ,float a){
     strcpy(title,s);
     price=a;
    }
    virtual void display(){

    }
};
class book : public media{
    int pages;
    book(char* s ,float a,int p): media(s,a)
    {
       pages=p;
    }
    void display()
};
class tapes: public media{
    float time;
    tapes(char* s ,float a,float t):media(s,a)
    {
        t=time;
    }
    void display();
};

void book:: display(){
    cout<<"\n Title:"<<title;
    cout<<"\n pages"<<pages;
    cout<<"\n Price"<<price;
}
void tapes:: display(){
    cout<<"\n Title:"<<title;
    cout<<"\n Play time"<<time;
    cout<<"\n Price"<<price;
}
int main(){
    
}
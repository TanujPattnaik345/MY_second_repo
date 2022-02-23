#include <iostream>
using namespace std;
class Base
{
public:
     void display()
    {
        cout << "\n The display function of the base class" << endl;
    }
    virtual void show()
    {
        cout << "\nThe show function of the base class" << endl;
    }
};
class derived : public Base
{

 public:
   virtual void display()
    {
        cout << "\nThe display function of the derived class" << endl;
    }
    void show()
    {
        cout << " \nThe display function of the derived class" << endl;
    }
};
int main()
{
    Base b;
    derived d;
    Base *bptr;
    cout << "Making an object pointer that points to the base class";
    bptr = &b;
    bptr->display();
    bptr->show();

    bptr = &d;
    bptr->display();
    bptr->show();
    return 0;
}
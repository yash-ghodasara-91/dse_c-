#include<iostream>
using namespace std;
class animal
{
private:
    int a;
public:
    void display()
    {
        cout<<"This is Base class 1\n";
    }
};
class bird
{
protected:
    int b;
public:
    void display()
    {
        cout<<"This is Base class 2\n";
    }
};
class derive:public animal,public bird  
{
    public:
        void display()
        {
            cout<<"This is Derive Class \n";
        }
};
main()
{
    derive d;
    d.display();
    d.animal::display();
    d.derive::display();
    d.bird::display();
}
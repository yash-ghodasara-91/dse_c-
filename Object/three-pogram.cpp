#include<iostream>
using namespace std;
class animal
{
private:
    // int a;
public:
    void display()
    {
        cout<<"This is Base class 1\n";
    }
};
class derive1:public animal
{
protected:
    // int b;
public:
    // void display()
    // {
    //     cout<<"This is Base class 2\n";
    // }
};
class derive2:public animal  
{
    public:
        void display()
        {
            cout<<"This is Derive Class \n";
        }
};
main()
{
    derive1 d1;
    derive2 d2;
    d1.display();
    d2.display();
    d1.display();
}
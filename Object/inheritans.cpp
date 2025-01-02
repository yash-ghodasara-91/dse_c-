#include <iostream>
using namespace std;

class animal {
    private:
        int a;

    public:

    int b;
        void display() {
            cout << "This Class is Base \n";
            
        }
};

class derive:public animal {

    public:
        void display() {

            cout << "this is derive clss \n";
            
        }
};

main () {

    derive d;
    d.display();
    d.animal::display();
    d.derive::display();


    return 0;
} 
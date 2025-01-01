#include <iostream>
using namespace std;


class Student {

    public:
        string name;
        string  sur;
        string city;
        int age;
        int gr_id;

        void setdeta() {
            cout << "------------------";
           cout << "Enter your Name:- ";
           cin >> name;

            cout << "------------------";
            cout << "Enter your Surname:- ";
           cin >> sur;

            cout << "------------------";
            cout << "Enter your City:- ";
           cin >> city;

            cout << "------------------";
            cout << "Enter your Age:- ";
           cin >> age;
        
            cout << "------------------";
           cout << "Enter your GR_id:- ";
           cin >> gr_id;
           
        }

        void getdeta() {
            cout << "Name : " << name << endl
                 << "Surname : "<< sur << endl
                << "City : " << city << endl
                << "Age : " << age << endl
                << "GR_ID : " << gr_id <<endl;
        }

};

int  main () {
    Student arr[10];

    for( int s = 0; s < 10; s++) {
 
        arr[s].setdeta();
        arr[s].getdeta();

        cout << endl;
    }



}  
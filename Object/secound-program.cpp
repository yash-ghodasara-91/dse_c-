#include<iostream>
#include<string.h>
using namespace std;
class student
{
    public:
        string name;
        string surname;
        int age;
        int gr_id;
        string city;
            student(string n,string s,int a,int g,string c)
            {
                this->name = n;
                this->surname = s;
                this->age = a;
                this->gr_id=g;
                this->city=c;

            }
            void setdata()
            {
                cout<<"Name:"<<name<<"\n"
                <<"Surname:"<<surname<<"\n"
                <<"Age:"<<age<<"\n"
                <<"Gr_id:"<<gr_id<<"\n"
                <<"City:"<<city<<"\n";
            }
};
main()
{
    string n,s,c;
    int a,g;
    cout<<"Enter Name:";
    cin>>n;
    cout<<"Enter Surname:";
    cin>>s;
    cout<<"Enter Age:";
    cin>>a;
    cout<<"Enter Gr_Id:";
    cin>>g;
    cout<<"Enter City:";
    cin>>c;  
    student s1(n,s,a,g,c);
    s1.setdata();
}
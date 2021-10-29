/*Write object-oriented C++ program .Define First base class with data member name. 
Second base class with data member telephone no. Derived class with data member height. 
Program should display details of a student(Multiple l inheritance)*/

#include<iostream>
using namespace std;

class Student {
    private:
        char myname[10];
    public:
        void get_name() {
            cin >> myname;
        }
        void show_name() {
            cout << endl << myname;
        }
};

class Details {
    private:
        long ph_no;
    public:
        void get_no() {
            cin >> ph_no;
        }
        void show_tele() {
            cout << endl << ph_no;
        }
};

class Stats : public Details, public Student {
    private:
        int height;
    public:
         void get_height() {
            cin >> height;
        }
        void show_height() {
            cout << endl << height;
        }
};

int main()
{
    Stats hk;
    cout << "Enter  name" << endl;
    hk.get_name();
    cout << "Enter  Telephone" << endl;
    hk.get_no();
    cout << "Enter  Height" << endl;
    hk.get_height();
    cout << endl;
    hk.show_name();
    hk.show_tele();
    hk.show_height();
} 
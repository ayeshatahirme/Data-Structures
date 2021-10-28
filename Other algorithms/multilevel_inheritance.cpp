#include<iostream>
using namespace std;

class student
{
    protected:
        int roll_number;
    public:
        void get_roll_no(int num)
        {
            roll_number=num;
        }
};

class college:public student
{
    protected:
        int clg_no;
    public:
        void get_clg_no(int num)
        {
            clg_no=num;
        }
};

class display:public college
{
  public:

    void dis()
    {
        cout<<"College Number is: "<<clg_no<<endl<<"Roll Number is: "<<roll_number<<endl;
    }
};


int main()
{
    display d1;
    d1.get_roll_no(1);
    d1.get_clg_no(2);
    d1.dis();
    return 0;

}

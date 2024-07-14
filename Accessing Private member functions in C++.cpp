#include<iostream>
using namespace std;
class emp
{
private :
    int id;
    char name[10];
    float sal;
    void getemp()
    {

        cout<<"enter emp id, name, salary";
        cin>>id>>name>>sal;
    }
public :
    void putemp()
    {
        getemp();
        cout<<id<<name << sal;
    }
};
int main()
{
    emp e;
    e.putemp();
}

#include<iostream>
using namespace std;
class employee
{
public:
    int salary;
    string name;
    int id;
    void details(int i,string n,int x)
    {
        salary=i;
        name=n;
        id=x;
    }

    void display()
    {
        cout<<salary<<name<<id<<endl;
    }
};
    int main()
    {
        employee e1;
        employee e2;
        employee e3;
        e1.details(1,"Nandan BU",20000);
        e2.details(2,"Amal",30000);
        e3.details(3,"Jaggu",40000);
        e1.display();
        e2.display();
        e3.display();
        return 0;
    }

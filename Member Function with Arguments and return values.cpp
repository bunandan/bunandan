#include<iostream>
using namespace std;
class test
{
    int a,b;
public:
   void read_data(int x,int y)
   {
       a=x;
       b=y;
   }
    void showdata()
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
int big()
{
    if(a>b)
    {
        return a;
    }
    else if(b>a)
    {
        return b;
    }
    else
    {
        cout<<"both are equal"<<endl;
    }
}
};
int main()
{
    test t;
    t.read_data(10,20);
    t.showdata();
    int Max=t.big();
    cout<<"Max="<<Max;
}

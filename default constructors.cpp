#include<iostream>
using namespace std;
class construct
{
public:
     int a,b;//initialize data members
     construct()//this is a default constructros
     {
         //we can also assign both values to zero
         a=10;//initialize a with some value
         b=20;//initialize b with some value
     }
};
int main()
{
    construct c;//creating an object of construct calls default  constructor
    cout<<"a:"<<c.a<<endl<<"b:"<<c.b;//print a and b
    return 0;
}

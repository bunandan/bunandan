/*#include<iostream>
#include<conio.h>
using namespace std;
int  main()
{
    int a=100;
    int &b=a;
    int &c=b;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    c=200;
    cout<<a<<b<<c<<endl;
}*/
#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
 int a=10,b=20;
 swap(a,b);
 cout<<a<<b<<endl;
}

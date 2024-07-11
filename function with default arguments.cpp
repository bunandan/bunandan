/*#include<iostream>
using namespace std;
int sum(int x=1, int y=2, int z=3);
int sum(int x,int y,int z )
{
    return x+y+z;
}
int main()
{
    cout<<"sum="<<sum(10,20,30)<<endl;
    cout<<"sum="<<sum(10,20)<<endl;
    cout<<"sum="<<sum(10)<<endl;
}*/

#include<iostream>
using namespace std;
float si(float p,float t,float r=3)
{
    return (p*t*r)/100;
}
int main()
{
    cout<<"si="<<si(1000,10,2)<<endl;
    cout<<"si="<<si(100,10)<<endl;
}


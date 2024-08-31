#include<iostream>
using namespace std;
class Point
{
private:
    int x,y;
public:
    Point(int x1,int y1)//create parameterized constructor and initialize data member
    {

        x=x1;//x1 now initialize to x
        y=y1;//y1 now initialize to y

    }
    int getX()
    {
        return x;

    }
    int getY()
    {
       return y;
    }
};
int main()
{
    Point p1(10,15);
    cout<<"p1.x= "<< p1.getX()<<"p1.y="<<p1.getY();
    return 0;
}

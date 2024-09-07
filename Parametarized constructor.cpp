#include<iostream>
using namespace std;
class Point//create point class
{
private:
    int x,y;//the two data members of class point
public:
    Point(int x1,int y1)//create parameterized constructor and initialize data member
    {
        x=x1;//x1 is now initialize to x;
        y=y1;//y1 is now initialized to y
    }
    int getX()
    {

        return x;//to get the value of x;
    }
    int getY()
    {
        return y;//to get the value of y
    }
};
int main()
{
    Point p1(10,15);//cteated object for parameterized constructor
    cout<<"p1.x="<<p1.getX()<<"p1.y="<<p1.getY();//print x and y
    return 0;
}

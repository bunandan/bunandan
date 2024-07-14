#include<iostream>
using namespace std;
#include<string.h>
class emp
{
    int empid;
    char ename[20];
    float sal;
public:
    void getemp(int id,char name[20],float basic);
    void putemp();
};
void emp::getemp(int id,char name[20],float basic)
{
    empid=id;
    strcpy(ename,name);
    sal= basic;
}
void emp:: putemp()
{
    cout<<"empid="<<empid<<endl;
    cout<<"ename="<<ename<<endl;
    cout<<"sal="<<sal;
}
 int main()
{
    emp e;
    e.getemp(101,"kishore",10000);
    e.putemp();
}

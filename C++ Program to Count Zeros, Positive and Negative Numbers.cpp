#include<iostream>
using namespace std;
int main()
{
    int input[100],count,i,nCount=0,pCount=0,zCount=0;
    cout<<"enter number of elements int array\n";
    cin>>count;
    cout<<"enter"<<count <<"numbers\n";

    for(i=0;i<count ;++i)
    {
        cin>>input[i];
    }
    for(i=0;i<count;i++)
    {
        if(input[i]<0)
        {
           nCount++;
        }
        else if(input[i]>0)
            {
               pCount++;
            }
        else
        {
            zCount++;
        }
    }
    cout<<"positive numbers:"<<pCount<<endl;
    cout<<"negative numbers:"<<nCount<<endl;
    cout<<"zeros:"<<zCount<<endl;
    return 0;
}


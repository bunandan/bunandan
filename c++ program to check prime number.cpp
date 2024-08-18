#include<iostream>
using namespace std;
int main()
{
    int num,i,isPrime=0;
    cout<<"enter a positive integer\n";
    cin>>num;
    for(i=2;i<=(num/2);++i)
    {
        if(num%i==0)
        {
            isPrime=1;
            break;
        }
    }
    if(isPrime==0)
    {
        cout<< num <<" is  a prime number";

    }
    else
    {
        cout<< num <<" is not  a primer number";
    }
   return 0;
}

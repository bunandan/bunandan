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
/*#include<iostream>

using namespace std;

int main() {
  int num, i, isPrime=0;
  cout << "Enter a Positive Integer\n";
  cin >> num;
  // Check whether num is divisible by any number between 2 to (num/2)
  for(i = 2; i <=(num/2); ++i) {
      if(num%i==0) {
          isPrime=1;
          break;
      }
  }

  if(isPrime==0)
      cout << num << " is a Prime Number";
  else
      cout << num << " is not a Prime Number";

  return 0;
}*/

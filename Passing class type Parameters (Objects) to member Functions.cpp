/*#include<iostream>
using namespace std;
class sample
{
private:
    int a;
public:
    void geta()
    {
        cout<<"enter a value";
        cin >>a;
    }
    void puta()
    {
        cout<<"a="<<a<<endl;
    }
     void big(sample s2)
    {
        if(a>s2.a)

        else if(a<s2.a)
          {
            cout<<"s2.a is big";
          }
        else
            cout<<"both are equal";
    }
};
int main()
{
    sample s1,s2;
    s1.geta();
    s2.geta();
    s1.puta();
    s2.puta();
    s1.big(s2);
}*/
#include <iostream>
#include <stack>
#include <vector>

class Solution {
public:
    void reverseString(std::vector<char>& s) {
        std::stack<char> st;
        for (int i = 0; i < s.size(); i++)
            st.push(s[i]);
        s.clear();
        while (!st.empty()) {
            s.push_back(st.top());
            st.pop();
        }
    }
};

void testReverseString() {
    Solution sol;

    // Example 1
    std::vector<char> s1 = {'h', 'e', 'l', 'l', 'o'};
    sol.reverseString(s1);
    std::cout << "Example 1 - Output: [";
    for (char c : s1) {
        std::cout << c << ",";
    }
    std::cout << "]" << std::endl;

    // Example 2
    std::vector<char> s2 = {'H', 'a', 'n', 'n', 'a', 'h'};
    sol.reverseString(s2);
    std::cout << "Example 2 - Output: [";
    for (char c : s2) {
        std::cout << c << ",";
    }
    std::cout << "]" << std::endl;
}

int main() {
    testReverseString();
    return 0;
}

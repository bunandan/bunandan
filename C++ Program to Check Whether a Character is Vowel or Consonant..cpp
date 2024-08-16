#include <iostream>

using namespace std;

int main() {
    char c;
    cout << "Enter a Character\n";
    cin >> c;
    /* Check if input alphabet is member of set{A,E,I,O,U,a,e,i,o,u} */
    if(c == 'a' || c == 'e' || c =='i' || c=='o' || c=='u' || c=='A'
          || c=='E' || c=='I' || c=='O' || c=='U'){
        cout << c << " is VOWEL";
    } else {
        cout << c <<" is CONSONANT";
    }

    return 0;
}

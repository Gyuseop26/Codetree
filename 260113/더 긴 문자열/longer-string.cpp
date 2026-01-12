#include <iostream>
#include <string>
using namespace std;

int main() {
    string text1, text2;
    
    cin >> text1 >> text2 ;
    
    if (text1.length() > text2.length()) cout << text1 <<" " << text1.length();

    else if (text1.length() == text2.length()) cout << "same" ;

    else cout << text2 <<" " << text2.length();
    return 0;
}
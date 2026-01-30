#include <iostream>
using namespace std;

int main() {
    int a, b;
    char s;
    while (true){
        cin >> a >> b >> s;
        
        cout << a * b << "\n";
        
        if (s == 'C') break;
    }
    return 0;
}
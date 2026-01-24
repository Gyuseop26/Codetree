#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    
    cin >> a >> b >>c;

    if (a < b && a < c) cout << (b < c ? b : c);
    
    else if (a > b && a > c) cout << (b < c ? c : b);
    
    else cout << a;

    return 0;
}
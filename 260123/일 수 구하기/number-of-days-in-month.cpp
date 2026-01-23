#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    // 1, 3, 5, 7, 8, 10, 12
    // 2, 4, 6, 9, 11
    if (n == 2) cout << 28;

    else if (n < 8) !(n % 2) ? cout << 30 : cout << 31;
    
    else if (n >= 8) !(n % 2) ? cout << 30 : cout << 31;
    
    return 0;
}
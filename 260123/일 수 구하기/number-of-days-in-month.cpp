#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    // 1, 3, 5, 7, 8, 10, 12
    // 2, 4, 6, 9, 11
    if (n == 4 || n == 6 || n == 9 || n == 11) cout << 30;
    
    else if (n == 2) cout << 28;
    
    else cout << 31;
    
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0;  i < 2 * n -1; i++){
        int dist = abs(n - 1 - i);
        
        string empty = string(dist,' ');
        string star = string(2*(n-dist)-1,'*');
        
        cout << empty << star;

        cout << "\n";
    }
    return 0;
}
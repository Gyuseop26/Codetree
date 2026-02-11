#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i ++){
        for (int j = 0; j < n; j++){
            cout << 2 * (i + j) + 9 << (j != n - 1 ? " " : "");
        }
        cout << "\n";
    }
    return 0;
}
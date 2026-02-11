#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = n * i; j >= i; j -= i) cout << j << (j != i ? " " : "");
        cout << "\n";
    }
    return 0;
}
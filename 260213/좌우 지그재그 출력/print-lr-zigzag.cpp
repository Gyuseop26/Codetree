#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 1; j <= n; j++){
            cout << (i%2 == 0 ? (i * n + j) : ((i + 1 ) * n - j + 1)) << (j == n ? "" : " ");
        }
        cout <<"\n";
    }
    return 0;
}
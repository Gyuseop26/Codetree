#include <iostream>
using namespace std;

int main() {
    int n;
    string gugudan;
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 1; j <= n - i; j++){
            gugudan += to_string(i + 1) + " * " + to_string(j) + " = " + to_string((i+1)*j);
            gugudan += (j != n-i ? " / " : "\n");
        }
    }
    cout << gugudan;
    return 0;
}
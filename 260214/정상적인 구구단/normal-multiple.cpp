#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        string gugudan ="";
        for (int j = 1; j <= n; j++){
            gugudan += to_string(i) + " * " + to_string(j) + " = " + to_string(i * j);
            gugudan += (j != n ? ", ": "");
        }
        cout << gugudan << "\n";
    }
    return 0;
}
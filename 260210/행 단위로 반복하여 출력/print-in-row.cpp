#include <iostream>
using namespace std;

int main() {
    int n;
    string number;
    cin >> n;
    for (int i = 0; i < n; i++){
        
        string number = "";
        
        for (int j = 1; j <= n; j++){
            number += to_string(j);
        }
        cout << number << "\n";
    }
    return 0;
}
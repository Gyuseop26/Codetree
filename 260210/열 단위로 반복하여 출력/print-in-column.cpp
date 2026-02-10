#include <iostream>
using namespace std;

int main() {
    int n;
    string number;
    cin >> n;
    for (int i = 1; i <= n; i++){
        
        string number = "";
        
        for (int j = 1; j <= n; j++){
            number += to_string(i);
        }
        cout << number << "\n";
    }
    return 0;
}
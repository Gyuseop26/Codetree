#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string line;
    for (int i = n; i > 0; i--){
        line += to_string(i) + (i == 1 ? "" : " ");
    }

    for (int i = 0; i < n; i++) cout << line << "\n";
    
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = n; i > 0; i--){
        string line = "";
        
        for (int j = n; j > 0; j--){
            line += "(" + to_string(i) + "," + to_string(j) + ") ";
        }
        
        cout << line << "\n";
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
           cout << (j%2 ? i : (n+1 - i)); 
        }
        cout << "\n";
    }
    return 0;
}
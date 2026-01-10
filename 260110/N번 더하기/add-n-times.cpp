#include <iostream>
using namespace std;

int main() {
    int a, n, total;
    cin >> a >> n;
    
    for(int i = 0; i < n; i++){
        total = a + n;
        a = total;
        cout << total << "\n";
    }
    return 0;
}
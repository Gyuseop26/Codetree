#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    while(true){
        cin >> n;
        
        if (n%2) continue;
        
        else if (!(n%2)) {
            cout << n/2 << "\n";
            cnt++;
        }

        if (cnt >= 3) break;
    }
    return 0;
}
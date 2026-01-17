#include <iostream>
using namespace std;

int main() {
    int n;
    
    cin >> n;
    
    for (int i = 1; i <= n; i++){
        
        for (int j = 0; j < n; j++){
            if (j % 2 == 0) //짝수
                cout << i;
            else cout << n+1 - i;
        }
        cout << "\n";
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n, a, b, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        
        for (int j = a; j <=b ; j++){
            if (!(j % 2 )) sum += j;
        }
        
        cout << sum << "\n";
        sum = 0;
    }
    
    return 0;
}
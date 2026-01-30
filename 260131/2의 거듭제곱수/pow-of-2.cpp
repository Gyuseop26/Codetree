#include <iostream>
using namespace std;

int main() {
    int n, x= 0, result = 1;
    cin >> n;
    while (true){
        if (n == result) break;
        
        result *= 2;
        x++;
    }
    cout << x;
    
    return 0;
}
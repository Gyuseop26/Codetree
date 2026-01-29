#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        if(!(i%3) && (i%9)) continue;
        
        if((i%2) && (i % 10 != 5)) cout << i << ' ';
    }
    return 0;
}
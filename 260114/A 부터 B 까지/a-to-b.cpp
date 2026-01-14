#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    while(true){
        cout << a << " ";
        
        if (a % 2) a *= 2 ;

        else a += 3;

        if (a > b) break;
    }
    return 0;
}
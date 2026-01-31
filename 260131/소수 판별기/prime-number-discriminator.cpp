#include <iostream>
using namespace std;

int main() {
    int n;
    bool flag = false;
    
    cin >> n;
    
    for (int i = 2; i * i <= n; i++){
        if (!(n%i)){
            flag = true;
            break;
        }
    }

    cout << (flag ? "C" : "P");
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n, num;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> num;
        if (num % 2 ==0) cout << num << (i < n-1 ? " " : "");
    }
    return 0;
}
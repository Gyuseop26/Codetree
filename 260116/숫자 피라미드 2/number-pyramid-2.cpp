#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;
    for (int i = 1; i <= n; i++){

        for (int j = 0; j < i; j++){
            cnt += 1;
            cout << cnt << " ";
        }
        cout << "\n";
    }
    return 0;
}